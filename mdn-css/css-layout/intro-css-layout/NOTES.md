# Introduction to CSS Layout #
CSS page layout techniques allow us to take elements contained in a web page and control where they are positioned relative to their default position in normal layout flow, the other elements around them, their parent container, or the main viewport/window. The page layout techniques we'll be covering in more detail in this module are
  * Normal flow
  * The `display` property
  * Flexbox
  * Grid
  * Floats
  * Positioning
  * Table layout
  * Multiple-column layout

  Each technique has its uses, advantages, and disadvantages, and no technique is designed to be used in isolation. By understanding what each method is designed for you will be in good shape to understand which is the best layout tool for each task.

  ## Normal flow ##
  Normal flow is how the browser lays out HTML pages by default when you do nothing to control page layout. Let's look at a quick example

  In normal flow, the HTML is displayed in the exact order in which it appears in the source code, with elements stacked up on one another - the first paragraph, followed by the unordered list, followed by the second paragraph.

  The elements that appear one below the other are described as *block* elements, in contrast to *inline* elements, which appear one beside the other, like the individual words in a paragraph.

  **Note**: The direction in which block element contents are laid out is described as Block Direction. The Block Direction runs vertically in a language such as English, which has a horizontal writing mode. It would run horizontally in any language with a Vertical Writing Mode, such as Japanese. The corresponding Inline Direction is the direction in which inline contents (such as a sentence) would run. Horizontal for english, but vertiical for Japanese.

  For many of the elements on your page the normal flow will create exactly the layout you need, however for more complex layouts you will need to alter this default behavior using some of the tools available to you in CSS. Starting with a well-structured HTML document is very important, as you can then work with the way things are laid out by default rather than fighting against it.

  The methods that can change how elements are laid out in CSS are as follows:
    * **The `display` property** - standard values such as `block`, `inline`, or `inline-block` can change how elements behave in normal flow, for example making a block-level element behave like an inline element. We also have entire layout methods that are switched on vai specifc `display` values, for example CSS Grid and Flexbox, which alter how elements inside the element they are set on are laid out.
    * **`Floats`** - applying a `float` value such as `left` can cause block elements to wrap alongside one side of an element, like the way images sometimes have text floating around them in magazine layouts
    * **The `position` property** - allows you to precisely control the placement of boxes inside other boxes. `static` positioning is the default in normal flow, but you can cause elements to be laid out differently using other values, for example always fixed to the top of the browser vieweport
    * **Table layout** - features designed for styling the parts of an HTML table can be used on non-table elements using `display: table` and associated properties.
    * **Multi-column layout** - the multi-column layout properties can cause the content of a block to layout in columns, as you might see in a newspaper.

## The display property ##
The main methods of achieving page layout in CSS are all values of the `display` property. This property allows us to change the default way something displays. Everything in normal flow has a value of `display`, used as the default way that elements they are set on behave. For example, the fact that paragraphs in English display one below the other is due to the fact that they are styled with `display: block`. If you create a link around some text inside a paragraph, that link remains inline with the rest of the text, and doesn't break onto a new line. This is because the <a> element is `display: inline` by default.

In addition to being able to change the default presentation by turning an item from `block` to `inline` and vice versa, there are some bigger layout methods that start out as a value of display. However, when using these, you will generally need to invoke additional properties. The two values most important for our purposes when discussing layout are `display: flex` and `display: grid`.

## Flexbox ##
Flexbox is the shortname for the Flexible Box Layout Module, designed to make it easy for us to lay things out in one dimension - either as a row or as a column. To use flexbox, you apply `display: flex` to the parent element of the elements you want to lay out; all its direct children then become flex items.

The HTML markup below gives us a containing element, with a class of `wrapper`, inside which are three <div> elements. By default these would display as block elements, below one another.

However, if we add `display: flex` to the parent, the three items now arrange themselves into columns. This is due to them becoming `flex items`. They are displayed in a row, because the initial value of `flex-direction` set ont their parent is row. They all appear to stretch to the height of the tallest item, because the initial value of the `align-items` property set on their parent is `stretch`. The items all line up at the start of the container, leaving any extra space at the end of the row.

In addition to the above properties that can be applied to the flex container, there are properties that can be applied to the flex items. These properties, among other things, can change the way that items flex, enabling them to expand and contract to fit into the available space.

As a simple example, we can add the `flex` property to all of our child items, with a value of 1. This will casue all of the items to grow and fill the container, rather than leaving space at the end. If there is more space then the items will become wider; if there is less space they will become narrower. In addition, if you add another element to the markup the items will all become smaller to make space for it - they will adjust size to take up the same amount of space, whatever it is.

## Grid Layout ##
While flexbox is designed for one-dimentional layout, Grid Layout is designed for two dimensions - lining things up in rows and columns.

Once again, you can switch on Grid Layout with a specific value of `display: grid`. Below example is similar markup to the flex example, with a container and some child elements. In addition to using `display: grid`, we are also defining some row and column tracks on the parent using the `grid-template-rows` and `grid-template-columns` properties respectively. We've defined three columns each for `1fr` and two rows of `100px`. You don't need to put any rules on the child elements; they're automatically placed into the cells our grid has created.

Once you have a grid, you can explicitly place your items on it, rather than rerlying on the auto-placement behavior seen in the example. In our second example, we've defined the same grid, but this time with three child items. We've set the start and end line of each item using the `grid-column` and `grid-row` properties. This causes the items to span multiple tracks.

**Note**: These two examples are just a small part of the power of Grid layout; to find out more, see MDN's Grid Layout article.

The rest of this guide covers other layout methods, which are less important for the main layout structures of your page but can still help you achieve specific tasks. By understanding the nature of each layout task, you will soon find that when you look at a particular component of your design the type of layout best suited to it will often be clear.

## Floats ##
Floating an element changes the behavior of that element and the block level elements that follow it in a normal flow. The element is moved to the left or right and removed from normal flow, and the surrounding content floats around the floated item.

The `float` property has four possible values:
  * left - floats the element to the left
  * right - floats the element to the right
  * none - specifies no floating at all. This is the default value
  * inherit - specifies that the value of the float property should be inherited from the element's parent element.

In our example we float a <div> left, and give it a `margin` on the right to push the text away from the element. This gives us the effect of text wrapped around that box, and is most of what you need to know about floats as used in modern web design.

**Note**: Floats are fully explained in our lesson on *float & clear* properties. Prior to techniques such as Flexbox and Grid layout, floats were used as a method of creating column layouts. You may still come across these methods on the web; we will cover these in the lesson on legacy layout methods.

## Positioning techniques ##
Positioning allows you to move an element from where it would be placed when in normal flow to another location. Positioning isn't a method for creating your main page layouts, it's more about managing and fine-tuning the position of specific items on the page.

There are five types of positioning you should know about: 
  * **Static positioning** is the default that every element gets - it just means "put the element inot its normal position in the document layout flow - nothing special to see here."
  * **Relative positioning** allows you to modify an element's position on the page, moving it relative to its position in normal flow - including making it overlap other elements on the page.
  * **Absolute positioningg** moves an element completely out of the page's normal layout flow, like it is sitting on its own separate layout. From there, you can fix it in a position relative to the edges of the page's <html> element. This is useful for creating complex layout effects such as tabbed boxes where different content panels sit on top of one another and are shown and hidden as desired, or information panels that sit off screen by default, but can be made to slide on screen using a control button.
  * **Fixed positioning** is very similar to absolute positioning, except that is fixes an element relative to the browser viewport not another element. This is useful for creating effects such as a persistent navigation menu that always stays in the same place on the screen as the rest of the content scrolls.
  * **Sticky positioning** is a newer positioning method which makes an element act like `position: static` until it hits a defined offset from the viewport, at which point it acts like `position: fixed`.

  To provide familiarity with these layout techniques, we'll show you a couple quick examples. Our examples will all feature the same HTML.

  --- RELATIVE POSITIONING ---
  Allows you to offset an item from the position in normal flow it would have by default. This means you could achieve a task such as moving an icon down a bit so it lines up with a text label. To do this, we could add the relative rule to our css

  In our example, we give our middle paragraph a `position` value of `relative` - this doesn't do anything on its own, so we also add `top` and `left` properties. These serve to move the affected element down and to the right - this might seem like the opposite of what you were expecting, but you need to think of it as the element being pushed on its left and top sides, which results in it moving right and down.