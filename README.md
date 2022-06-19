<h1 align="center"> ft_printf - 42sp </h1>


<p align="center"><a href="https://www.42sp.org.br/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=SP&color=000&style=for-the-badge&logo=42""></a></p>
    
<p align="center"><img src="https://user-images.githubusercontent.com/81205527/157133425-69e61e0d-9051-4733-87cb-844319544a8b.png"> </p>


<h2 align="center" id="what-is-ft-printf"> What is ft_printf? </h2>

The third project at 42 programming school. It consists of a static library that contains ft_printf - a function that mimics the real printf - and another library with recoded standard functions in C to support the project's development. It's an extremely useful function that does a series of base conversions (decimal and hexadecimal) and makes the output much easier - especially when compared to its predecessor in 42 - the system call write. The function can be used in future projects.

<h2 align="center" id="how-does-it-work"> How does it work? </h2>
    
The printf function is one of the most known and used in the C language to give an output.
It takes a string as an argument, this string may contain some placeholders (like %c for characters or %s for strings) whose original values are passed as arguments. The ft_printf has variable arguments, the only one being mandatory is the string that will be printed, otherwise it depends on how many placeholders are passed in this string. The function's return is the number of characters printed or -1 for error.
    
To create with a function like this, it must be a variadic function (with variable number of arguments), which is possible to achieve using the header <stdarg.h> and parameters like va_arg for the list arguments in order of occurrence or va_start and va_end to start and end the use of the argument list.
For each conversion required by the subject, there's a function that converts the argument and returns the numer of bytes writed:
    
• <b>%c</b> print a character.
    
• <b>%s </b>print a string.
    
• <b>%p </b>The void * pointer argument is printed in hexadecimal.
    
• <b>%d </b>print a decimal (base 10) number.
    
• <b>%i </b>print an integer in base 10.
    
• <b>%u </b>print an unsigned decimal (base 10) number.
    
• <b>%x </b>print a number in hexadecimal Lowercase (base 16).

• <b>%X </b>print a number in hexadecimal UpperCase (base 16).
    
• <b>%%</b> print a percent sign.

</div>
