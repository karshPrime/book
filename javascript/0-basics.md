@@ -1,100 +0,0 @@
# Javascript Notes

## Sensitivity
- Case: True <br>
language keywords, variables, function names, and any other identifiers must always be typed with a consistent capitalization of letters.

- Indentation: False
Spaces and Tabs can be used freely. Whitespaces are ignored.


## Semicolons `;`
Semicolons are optional. Rules are somewhat same as Ruby-semicolons.
```js
varA = 10
varB = "some text"
```
with semicolons, these varibles can be defined in 1 line.
```js
varA = 10; varB = "some text";
```


## Comments
```js
// single line comment

/*
multi line
comment
*/
```


## Datatypes
suported primitive data types: 
- Number: 1, 2, 3, 3.142
- String: "random text- kjfho2rpf9siodppj"
- Boolean: true / false
- null/undefined


## Variables
Variables work somewhat same as C++. They must be defined before value-assignment.
```js
var text
text = "some text"
```
this can be done in single line-
```js
var text = "some text"
```
Global and Local variables
```js
// variables defined in the root file are "global" by nature, i.e. they can be used anywhere in the code.
var varA = "this is a global variable"

function checkscope() {
    // variables defined inside a function can be used only in that function
    var varB = "local"
}
```


## Keywords (cannot be used as identifier)
```
| abstract  | 	else        | 	instanceof  | 	switch          |
| boolean   | 	enum        | 	int         | 	synchronized    |
| break     | 	export      | 	interface   | 	this            |
| byte      | 	extends     | 	long        | 	throw           |
| case      | 	false       | 	native      | 	throws          |
| catch     | 	final       | 	new         | 	transient       |
| char      | 	finally     | 	null        | 	true            |
| class     | 	float       | 	package     | 	try             |
| const     | 	for         | 	private     | 	typeof          |
| continue  | 	function    | 	protected   | 	var             |
| debugger  | 	goto        | 	public      | 	void            |
| default   | 	if          | 	return      | 	volatile        |
| delete    | 	implements  | 	short       | 	while           |
| do        | 	import      | 	static      | 	with            |
| double    | 	in          | 	super       |                   |
```


## Operators
Arithmetic Operators
- `+ ` Addition
- `- ` Subtraction
- `* ` Multiply
- `/ ` Division
- `% ` Modulus
- `++` Increment +1
- `--` Decrement -1

Comparison Operators
- `==` equal
- `!=` not equal
- `> ` greater than
- `< ` smaller than
- `>=` greater than OR equal to
- `<=` smaller than OR equal to