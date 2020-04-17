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
HTML has two forms of drop down content: the `select box` and the `autocomplete box`

A simple select box is created with a <select> element with one or more <option> elements as its children, each of which specifies one of its possible values

If required, the default value for the select box can be set using the `selected` attribute on the desired <option> element - this option is then preselected when the page loads.

The <option> elements can be nested inside <optgroup> elements to create visually associated groups of values:
  On the <optgroup> element, the value of the `label` is displayed before the values of the nested options.
  If the <option> element has an explicit value attribute set on it, that value is sent when the form is submitted. If the `value` attribute is omitted, the content of the <option> element is used as the value so the `value` attribute is not necessarily needed unless you want to send a shorthand value

By default, the height of the select box is enough to display a single value. The optional `size` attribute provides control over how many options are visable when the select does not have focus

--- MULTIPLE CHOICE SELECT BOX ---
By default, a select box only lets the user select a single value. By adding the `multiple` attribute to the <select> element, you can allow users to select several values, by using the default mechanism provided by the operating system (e.g. holding down cmd/ctrl and clicking multiple values)

--- AUTOCOMPLETE BOX ---
You can provide suggested, automatically-completed values for form widgets using the <datalist> element with child <option> elements to specify the values to display.
  The <datalist> needs to be given an id

The data list is then bound to an <input> element (e.g. text or email) using the `list` attribute, the value of which is the `id` of the data list to bind 

Once a data list is affiliated with a form widget, its options are used to auto-complete text entered by the user; typically, this is presented to the user as a drop-down box listing possible mataches for what they've typed into the input

Almost all browsers support datalist, but if you're still supporting older browsers such as IE version below 10, there is a trick to provide a fallback.

Browsers that support the <datalist> element will ignore all the elements that are not <option> elements, with the datalist working as expected.
  Old browsers that don't support the <datalist> element will display the label and select box.
  If you use this fallback, ensure the data for both the <input> and <select> are collected server-side

## Other form features ##
There are a few other form features that are not as obvious as the ones we have already mentioned, but still useful in some situations, so we thought it would be worth giving them a brief mention.

--- METERS AND PROGRESS BARS ---
Meters and progress bars are visual representations of numeric values

Progress:
  Bar that represents a value that changes over time up to a maximum value specified by the `max` attribute. Such a bar is created using a <progress> element.
  The content inside the <progress> element is a fallback for browsers that don't support the element and for screen readers to vocalize it

Meters:
  Bar that represents a fixed value in a range delimited by a `min` and `max` value. This value is visually rendered as a bar, and to know how this bar looks, we compare the value to some other set values:
  The `low` and `high` values divide the range in three parts:
    The lower part between `min` and `low`, inclusive
    The medium part of the range between `low` and `high`, exclusive
    The higher part of the range between `high` and `max`, inclusive
  The `optimum` value defines the optimum value for the <meter> element. In conjunction with the `low` and `high` value, it defines which part of the range is preferred:
    If the `optimum` value is in the lower part of the range, the lower range is considered to be the preferred part, the medium range is considered to be the average part, and the higher range is considered to be the worst part
    If the `optimum` value is in the medium part of the range, the lower range is average part, medium range is preferred part, and higher range is also average
    If the `optimum` value is in the higher part of the range, lower part is worst part, medium is average part, and higher is preferrred part.
  
  All browsers that implement the <meter> element use those values to change the color of the meter bar: 
    If the current value is in the preferred part, the bar is green
    If the current value is in the average part, the bar is yellow
    If the current value is in the worst part, the bar is red
  
  Such a bar is created using the <meter> element. This is for implementing any kind of meter, for example a bar showing total space used on a disk, which turns red when it starts to get full.

  The content inside the <meter> element is a fallback for browsers that dont' support the element and for assistive technologies to vocalize it

  Support for <progress> and <meter> is fairly good - there is not support for Internet Explorer, but other browsers support it well.
