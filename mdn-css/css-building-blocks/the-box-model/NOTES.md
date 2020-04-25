# The Box Model #
Everything in CSS has a box around it, and understanding these boxes is key to being able to create layouts with CSS, or to align items with other items. In this lesson, we will take a proper look at the CSS *Box Model* so that you can build more complex layout tasks with an understanding of how it works and the terminology that relates to it.

## Block and Inline Boxes ##
In CSS we broadly have two types of boxes - **block boxes** and **inline boxes**. These characteristics refer to how the box behaves in terms of page flow, and in relation to other boxes on the page.

If a box is define as a `block`, it will behave in the following ways:
  The box will break onto a new line
  The box will extend in the inline direction to fill the space available in its container. In most cases this means that the box will become as wide as its container, filling up 100% of the space available.
  The `width` and `height` properties are respected
  Padding, margin, and border will cause other elements to be pushed away from the box

Unless we decide to change the display type to inline, elements such as headings (e.g. <h1>) and <p> all use `block` as their oter display type by default

If a box has an outer display type of `inline`, then:
  The box will not break onto a new line
  The `width` and `height` properties will not apply
  Padding, margin and borders will apply but will not cause other inline boxes to move away from the box.

The <a> element, used for links, <span>, <em>, and <strong> are all examples of elements that will display inline by default.

The type of box applied to an element is defined by `display` property values such as `block` and `inline` and relates to the **outer** value of display.

## Aside: Inner and outer display types ##
At this point, we'd better also explain **inner** and **outer** display types. As mentioned above, boxes in CSS have an *outer* display type, which details whether the box is block or inline.

Boxes also have an *inner* display type, however, which dictates how elements inside that box are laid out. By default, the elements inside a box are laid out in **normal flow**, which means that they behave just like any other block and inline elements (as explained above).

We can, however, change the inner display type by using `display` values like `flex`. If we set `display: flex;` on an element, the outer display type is `block`, but the inner display type is changed to `flex`. Any direct children of this box will become flex items and will be laid out according to the rules set out in the **Flexbox** spec, which you'll learn about later on.

When you move on to learn about CSS Layout in more detail, you'll encounter `flex`, and various other inner values that your boxes can have, for example, `grid`.

Block and inline layout, however, is the default way that things on the web behave - as we said above, it is sometimes referred to as *normal flow*, because without any other instruction, our boxes lay out as block or inline boxes.

## Examples of different display types ##
Let's move on and have a look at some examples. In our HTML file, we have three different HTML elements, all of which ahve an outer display type of `block`. The first is a paragraph, which has a border added in CSS. The browser renders this as a block box, so the paragraph begins on a new line, and exapnds to fill width available to it.

The second is a list, which is laid out using `display: flex`. This establishes flex layout for the items inside the container, however, the list itself is a block box and - like the paragraph - expands to the full container width and breaks onto a new line.

Below those, we have a block-level paragraph, inside which are two <span> elements. These elements would normally be `inline`, however, one of the elements has a class of block, and we have set it to `display: block`.

In the next example, we can see how `inline` elements behave. The <span> elements in the first paragraph are inline by default and so do not force line breaks.

We also have a <ul> element which is set to `display: inline-flex`, creating an inline box around some flex items.

Finally, we have two paragraphs both set to `display: inline`. The inline flex container and paragraphs all run together on one line rather than breaking onto new lines as they would do if they were displaying as block-level elements.

**In the example, you can change display: inline to display: block or display: inline-flex to display: flex to toggle between these display modes.**

We will encounter things like flex layout later in these lessons; the key thing to remember for now is that changing the value of the `display` property can change whether the outer display type of a box is `block` or `inline`, which changes the way it displays alongside other elements in the layout. 

In the rest of this lesson, we'll concentrate on the outer display type.

## What is the CSS box model? ##
