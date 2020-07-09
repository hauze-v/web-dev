# Normal Flow #
Element's on a webpage lay out in the normal flow, if you have not applied any CSS to change the way they behave. And, as we began to discover, you can change how elements behave either by adjusting their position in that normal flow, or removing them from it altogether.

Starting with a well-structured document that is readable in normal flow is the best way to begin any webpage. it ensures that youru content is readable, even if the user is using a very limited browser or a device such as a screen reader that reads out the content of the page. In addition, as normal flow is designed to make a readable document, by starting in this way you are working with the document rather than fighting against it as you make changes to the layout.

## How are elements laid out by default? ##
First of all, individual element boxes are laid out by taking the element's content, then adding any padding, border, and margin around them - it's that box model thing again, which we've looked at.

By default, a `block level element's` content is 100% of the width of its parent element, and as tall as its content. `Inline elements` are as tall as their content, and as wide as their content. You can't set width or height on inline elements - they just sit inside the content of block level elements. If you want to control the size of an inline element in this manner, you need to set it to behave like a block level element with `display: block;` (or even, `display: inline-block;`) which mixes characteristics from both.)

The normal layout flow is the system by which elements are placed inside the browser's viewport. By default, block-level elements are laid out in the *block flow direction*, based on the parent's writing mode (*initial*: horizontal-tb)  - each one will appear on a new line below the last one, and they will be separated by any margin that is set on them.

Inline elements behave differently - they don't appear on new lines; instead, they sit on the same line as one another and any adjacent (or wrapped) text content, as long as there is space for them to do so inside the width of the parent block level element. If there isn't space, then the overflowing text or elements will move down to a new line.

If two adjacent elements both have the margin set on them and the two margins touch, the larger of the two remains, and the smaller one disappears - this is called margin collapsing and we have talked about this before.

