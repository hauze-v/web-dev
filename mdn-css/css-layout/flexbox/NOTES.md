# Flexbox #
Flexbox is a one-dimensional layout method for laying out items in rows or columns. Items flex to fill additional apsace and shrink to fit into smaller spaces. This article explains all the fundamentals.

## Why flexbox? ##
For a long time, the only reliable cross browser-compatible tools available for creating CSS layouts were things like `floats` and `positioning`. These are fine and they work, but in some ways they are also rather limiting and frustrating.

The following simple layout requirements are either difficult or impossible to achieve with such tools (floats and positioning), in kind of convenient, flexible way:
  * vertically venterally a block of content inside its parent.
  * making all the children of a container take up an equal amount of the available width/height, regardless of how much width/height is available.
  * making all columns in a multiple column layout adopt the same height even if they contain a different amount of content

As you'll see in subsequent sections, flexbox makes a lot of layout tasks much easier. Let's dig in!

## Introducing a simple example ##
We'll work through a series of exercises to help you understand how flexbox works. 

To start, we need to select which elements are to be laid out as flexible boxes. To do this, we set a special value of `display` on the parent element of the elements you want to affect. In the case of our example, we want to lay out the <article> elements, so we set this on the <section> (which then becomes a flex container).

So, this single declaration gives us everything we need - incredible, right? We have our multiple column layout with equal sized columns, and the columns are all the same height. This is because the default values given to flex items (the children of the flex container) are set up to solve common problems such as this. More on those later.

**Note**: You can also set a `display` value of `inline-flex` if you wish to lay out inline items as flexible boxes.

## An aside on the flex model ##
When elements are laid out as flexible boxes, they are laid out along two axes: 

  * The **main axis** is the axis running in the direction the flex items are being laid out (e.g. as rows across the page, or columns down the page). The start and end of this axis are called the **main start** and **main end**.
  * The **cross axis** is the axis running perpendicular to the direction the flex items are being laid out in. The start and end of this axis are called the **cross start** and **cross end**.
  * The parent element that has `display: flex` set on it (the <section> in our example) is called the **flex container**.
  * The items being laid out as flexible boxes inside the flex container are called **flex items** (the <article> elements in our example).

Bear this terminology in mind as you go through subsequent sections. You can always refer back to it if you get confused about any of the terms being used.

## Columns or rows? ##
Flexbox provides a property called `flex-direction` that specifies what direction the main axis runs in (what direction the flexbox children are laid out in) - by default this is set to `row`, which causes them to be laid out in a row in the direction your browser's default language works in.

Try adding the declaration, `flex-direction: column` to your <section> rule.

You'll see this puts the items back in column layout, much like they were before we added any CSS.

**Note**: You can also lay out flex itemsin a reverse direction using the `row-reverse` and `column-reverse` values. Experiment with these values too!

## Wrapping ##