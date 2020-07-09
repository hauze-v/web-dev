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
The full CSS box model applies to block boxes, inline boxes only use some of the behavior defined in the box model. The model defines how the different parts of a box - margin, border, padding, and content - work together to create a box that you can see on the page. To add some additional complexity, there is a standard and an alternate box model.

--- PARTS OF A BOX ---
Making up a block box in CSS we have the:
  **Content box**: The area where your content is displayed, which can be sized using properties like `width` and `height`
  **Padding box**: The padding sits around the content as white space; its size can be controlled using `padding` and related properties
  **Border box**: The border box wraps the content and any padding. Its size and style can be controlled uisng `border` and related properties
  **Margin box**: The margin is the outermost layer, wrapping the content, padding and border as whitespace betwen this box and other elements. Its size can be controlled using `margin` and related properties.

--- THE STANDARD CSS BOX MODEL ---
In the standard box model, if you give a box a width and a height attribute, this defines the width and height of the *content box*. Any padding and border is then added to that width and height to get the total size taken up by the box.

**Note**: The margin is not counted towards the actual size of the box - sure, it affects the total space that the box will take up on the page, but only the space outside the box. The box's area stops at the border - it does not extend into the margin.

--- THE ALTERNATIVE CSS BOX MODEL ---
You might think it is rather inconvenient to have to add up the border and padding to get the real size of the box, and you would be right! For this reason, CSS had an alternative box model introduced some time after the standard box model. Using this model, any width is the width of the visible box on the page, therefore the content area width is that width minus the width for the padding and border.

By default, most browsers use the standard box model. If you want to turn on the alternative model for an element you do so by setting `box-sizing: border-box` on it. By doing this you are telling the browser to take the border box as the area defined by any size you set.

If you want all your elements to use the alternative box model, and this is common choice among developers, set the `box-sizing` property on the <html> element, then set all other elements to inherit that value, as seen in the css example.

**Note**: Interesting bit of history - Internet Explorer used to default to the alternative box model, with no mechanism available to switch.

## Playing with box models ##
In our example, you can see two boxes. Both have a class of .box, which gives them the same width, height, margin, border, and padding. The only difference is that the second box has been set to use the alternative box model.

**Can you change the size of the second box (by adding CSS to the .alternate class) to make it match the first box in width and height?**

To do so, you'll need to increase the height and width of the second block, to add the size of the padding and border.

--- USING BROWSER DEVTOOLS TO VIEW THE BOX MODEL ---
If you inspect an element in Firefox's DevTools, you can see the size of the element plus its margin, padding, and border. Inspecting an element in this way is a great way to find out if your box is really the size you think it is!

## Margins, Padding, and Borders ##
You've already seen the `margin`, `padding`, and `border` properties at work in the examples. THe properties used are **shorthands** and allow us to set all four sides of the box at once. These shorthands also have equivalent longhand properties, which allow control over the different sides of the box individually.

--- MARGIN ---
The margin is an invisable space around your box. It pushes other elements away from the box. Margins can have positive or negative values. Setting a negative margin on one side of your box can cause it to overlap other things on the page. Whether you are using the standard or alternative box model, the margin is always added after the size of the visible box has been calculated.

We can control all margins of an element at once using the `margin` property, or each side individually using the equivalent longhand properties:
  `margin-top`
  `margin-right`
  `margin-bottom`
  `margin-left`

**In the HTML example, try changing the margin values to see how the box is pushed around due to the margin creating or removing space (if it is a negative margin) between this element and the containing element.**

**Margin Collapsing**
A key thing to understand about margins is the concept of margin collapsing. If you have two elements whose margins touch, and both margins are positive, those margins will combine to become one margin, which is the size of the largest individual margin. If one or both margins are negative, the amount of the negative value will subtract from the total.

In our HTML example, we have two paragraphs. The top paragraph has a `margin-bottom` of 50px. The second paragraph has a `margin-top` of 30px. The margins have collapsed together so the actual margin between the boxes is 50px and not the total of the two margins.

**You can test this by setting the `margin-top` of paragraph two to 0. The visible margin between the two paragraphs will not change - it retains the 50px set in the `bottom-margin` of paragraph one. If you set it to -10px, you'll see that the overall margin becomes 40px - it substracts from the 50px.**

There are a number of rules that dictate when margins do and do not collapse. The main thing to remember for now is that margin collapsing is a thing that happens. If you are creating space with margins and don't get the space you expect, this is probably what's happening.

--- BORDERS ---
The border is drawn between the margin and the padding of a box. If you are using the standard box model, the size of the border is added to the width and height of the box. If you're using the alternative box model then the size of the border makes the content box smaller as it takes up some of that available width and height.

For styling borders, there are a large number of properties - there are four borders, and each border has a style, width, and color that we might want to manipulate.

--- PADDING ---
THe padding sits between the border and the content area. Unlike margins you cannot have negative amounts of padding, so the value must be 0 or a positive value. Any background applied to your element will display behind the padding, and it is typically used to push content away from the border.

We can control the padding on each side of an element individually using the padding property, or each side individually using the equivalent longhand properties.

## The Box Model and Inline Boxes ##
Everything above applies fully to block boxes. Some of the properties can apply to inline boxes too, such as those created by a <span> element.

In our HTML example, we have a <span> inside a paragraph and have applied a `width`, `height`, `margin`, `border`, and `padding` to it. You can see that the width and height are ignored. The margin, padding, and border are respected but they do not change the relationship of other content to our inline box so the padding and border overlaps other words in the paragraph.

## Using display: inline-block ##
There is a special value of `display`, which provides a middle ground between `inline` and `block`. This is useful for situations where you do not want an item to break onto a new line, but do want it to respect `width` and `height` and avoid the overlapping seen in our examples.

An element with `display: inline-block` does a subset of the block things we already know about:
  The `width` and `height` properties are respected
  `padding`, `margin`, and `border` will cause other elements to be pushed away from the box

It does not, however, break onto a new line, and will only become larger than its content if you explicitly add `width` and `height` properties

A common use case for special value for `display` property is when you want to give a link to a larger hit area by adding padding. <a> is an inline element like <span>; you can use `display: inline-block` to allow padding to be set on it, making it easier for a user to click a link.

You see this fairly frequently in navigation bars. The navigation below is displayed in a row using flexbox and we have added padding to the <a> element as we want to be able to change the `background-color` when the <a> is hovered. The padding appears to overlap the border on the <ul> element. This is because <a> is an inline element.

If you add `display: inline-block` to the rule with the .links-list a selector, you will see how it fixes this issue by causing the padding to be respected by other elements.