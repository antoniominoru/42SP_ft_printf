# 42SP_ft_printf
# 42cursus' project #3

## Mandatory

> <i>A small description of the required conversion:
> - `%c` print a single character.
> - `%s` print a string of characters.
> - `%p` The void * pointer argument is printed in hexadecimal.
> - `%d` print a decimal (base 10) number.
> - `%i` print an integer in base 10.
> - `%u` print an unsigned decimal (base 10) number.
> - `%x` print a number in hexadecimal (base 16).
> - `%%` print a percent sign.</i>

## Bonus

> <i>Manage any combination of the following flags: 
> - `-0.` and minimum field width with all conversions
> - Manage all the following flags: `# +`(yes, one of them is a space)<i>

## The project

### Conversions & Flags & Expected Order

| Conversion  | Description														 			| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **c** | Single ascii character         													|Mandatory		|
| **s** | String of characters NULL terminated												|Mandatory		|
| **p** | Pointer location converted to hexadecimal value									|Mandatory		|
| **d** | Decimal number 																	|Mandatory		|
| **i** | Integer in decimal base                 											|Mandatory		|
| **u** | Unsigned integer in decimal base                									|Mandatory		|
| **x** | Unsigned number printed in lowercase hexadecimal base                				|Mandatory		|
| **X** | Unsigned number printed in uppercase hexadecimal base                				|Mandatory		|
| **%** | The '%' ascii character                 											|Mandatory		|
| **o** | Unsigned number printed in octal base                 							|Extra			|

| Flag  | Description														 				| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **-** | Left align the argument passed	         										|Bonus 1		|
| **0** | Add '0' as a padding character in numeric conversions (single space is default)	|Bonus 1		|
| **.** | Precision definition, followed by a number 										|Bonus 1		|
| **+** | Add a plus sign ('+') in the front of positive numeric conversions 				|Bonus 2		|
| **' '** | Add a single space (' ') in the front of positive numeric conversions 			|Bonus 2		|
| **#** | Add the corresponding prefix in front of x, X and o conversions                 	|Bonus 2		|
| **\*** | Add a placeholder for numeric values that shall be passed through the variadic arguments  |Extra			|


| Holder key  | Prefix and justification flags *| Minimum Width *| Precision *	| Conversion 	|
|-------------|---------------------------------|---------------|---------------|---------------|
|`%`		  | `-` , `0` , `+` ,  ...			| `10`, `5` , ... | `.`, `.10`, `.5`, ... | `c`, `d`, `i`, `s`, ... |  

##### * : optional flags and definitions