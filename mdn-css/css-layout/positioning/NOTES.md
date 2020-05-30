# Positioning #
Positioning allows you to take elements out of the normal document layout flow, and make them behave differently; for example sitting on top of one another, or always remaining in the same place inside the browser viewport. This article explains the different `position` values, and how to use them.

## Introducing positioning ##
The whole idea of positioning is to allow us to override the basic document flow behavior described above, to produce interesting effects. What if you want to slightly alter the position of some boxes inside a layout from their default layout flow position, to give a slightly quirky, distressed feel? Positioning is your tool. Or if you want to create a UI element that floats over the top of other parts of the page and/or always sists in the same place inside the browser window no matter how much the page is scrolled? Positioning makes such layout work possible.

To make a specific type of positioning active on an element, we use the `position` property.

--- STATIC POSITIONING ---
Static positioning iss the default that every element gets - it just means "put the element into its normal position in the document layout flow - nothing special to see here."

To demonstrate this, and get your example setup for future sections, first add a class of `positioned` to the second <p> in the HTML.

Then add the following rule to the bottom of your CSS:

.positioned {
  position: static;
  background: yellow;
}

If you refresh you should see no difference at all except for the yellow background, which is what we're expecting with the static behavior!

--- RELATIVE POSITIONING ---
Relative positioning is the first position type we'll take a look at. This is very similar to static positioning, except that once the positioned element has taken its place in the normal layout flow, you can then modify it's final position, including making it overlap other elements on the page. Go ahead and update the `position` declaration in your code:

`position: relative;`

If you save and refresh at this stage, you won't see a change yet. So how do we modify the element's position? You need to use the `top`, `bottom`, `left`, and `right` properties, which we'll explain now.

--- INTRODUCING TOP, BOTTOM, LEFT, AND RIGHT ---
These properties are used alongside `position` to specify where to move the positioned elements to. Try this out:

.positioned {
  top: 30px;
  left: 30px;
}

--- ABOSOLUTE POSITIONING ---
Absolute positioning brings very different results. Let's try changing the position declaration in your code as follows: 

`position: absolute;`

First of all, note that the gap where the positioned element should be in the document flow is no longer there - the first and third elements have closed together like it no longer exists! Well, in a way, that's true. An absolutely positioned element no longer exists in the normal document layout flow. Instead, it sits on its own layout separate from everything else. This is very useful: it means that we can created isolated UI features that don't interfere with the position of other elements on the page. For example, popup information boxes and control menus; rollover panels; UI features that can be dragged and dropped anywhere on the page; and so on...

Second, notice that the position of the element has changed - this is because `top`, and `bottom`, `left`, and `right` behave in a different way with absolute positioning. Instead of specifying the direction the elemen should move in, they specify the distance the element should be from each containing element's sides. So in this case, we are saying that the absolutely positioned element should sit 30px from the top of the "containing element", and 30px from the left.

**Note**: Yes, margins still affect positioned elements, Margin collapsing doesn't, however.

--- POSITIONING CONTEXTS ---
Which element is the "containing element" of an absolutely positioned element? This is very much dependent on the position property of the ancestors of the positioned element.

If no ancestor elements have their position property explicitly defined, then by default all ancestor elements will have a static position. The result of this is, the absolutely positioned element will be contained in the **initial containing block**. The initial containing block has the dimensions of the viewport, and is also the block that contains the <html> element. 

Simply put, the absolutely positioned element will be contained outside of the <html> element, and be positioned relative to the initial viewport.

Our positioned element is nested inside the <body> in the HTML source, but in the final layout, it is 30px away from the top and left edge of the page. We can change the **positioning context** - which element the absolutely positioned element is positioned relative to. This is done by setting positioning on one of the element's ancestors - to one of the elements it is nested inside (you can't position it relative to an element it is not nested inside).

To demonstrate this, add the following declaration to your `body` rule:

`position: relative;`

You'll see that the absolutely positioned element now sits relative to the <body> element. 