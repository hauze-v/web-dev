# Other (non input) Form Controls #
This article shows non-input form elements in detail, from other control types such as drop-down lists and multi-line text fields, to other userful form features such as theh <output> element and progress bars

## Multi-line text fields ##
A multi-line text field is specified using a <textarea> element, rather than using the <input> element

Main difference between <textarea> elements and <input> elemets with `type="text"` is that the <textarea> element allows the user to include hard line breaks (pressing enter/return) that will be included when the data is submitted. 

<textarea> also takes a closing tag, and any default text you want it to contain should be put between the opening and closing tags. In contrast, the <input> element is an empty element with no closing tag -- any default value is put inside the `value` attribute.

--- CONTROLING MULT-LINE RENDERING ---
<textarea> accepts three attributes to control its rendering across several lines:

`cols` - specifies the visible width (in columns) of the text control, measured in average character widths.
  This is essentially the starting width as it can be changed by resizing the <textarea>, and overriden using CSS. 
  The default value if none is supplied is 20

`rows` - specifies the number of visible text rows for the control
  This is effectively the starting height of the control, as it can be cahgned with resizing, or CSS.
  The default value if none is supplied is 2

`wrap` - specifies how the control wraps text. It takes three potential values:
  soft (the default value), means the text submitted is not wrapped but the text rendered by the browser is wrapped; 
  hard (the `cols` attribute must be specified when using this value), which means both the submitted and rendered texts are wrapped 
  off stops wrapping

--- CONTROLING TEXTAREA RESIZABILITY ---
The ability to resize a <textarea> is controlled with the CSS resize property.

It's values are:
  `both` - the default - allows resizing horizontally and vertically
  `horizontal` - allows resizing only horizontally
  `vertical` - allows resizing only vertically
  `none` - allows no resizing
  `block` and `inline`: Experimental values that allow resizing in the `block` or `inline` direction only

## Drop-down Controls ##