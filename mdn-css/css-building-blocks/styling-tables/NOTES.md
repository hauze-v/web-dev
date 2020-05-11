# Styling Tables #
Styling an HTML table isn't the most glamorrous job in the world, but sometimes we all have to do it. This article provides a guide to making HTML tables look good, with some specific table styling techniques highlighted.

## Styling a typical HTML table ##

--- SPACING AND LAYOUT ---
First thing we need to do is sort out the spacing or layout - default table styling is so cramped! To do this, add the following CSS to your CSS file.

A `table-layout` value of `fixed` is generally a good idea to set on your table, as it makes the table behave a bit more predictably by default. Normally, table columns tend to be sized according to how much content they contain, which produces some strange results. With `table-layout: fixed`, you can size your columns according to the width of their headings, and then deal with their content as approrpriate. This is why we've selected the four different headings with the `thead th:nth-child(n)` selector ("select the *n*th child that is a <th> element in a sequence, inside a <thead> element") and given them set percentage widths. The entire column width follows theh width of its heading, making for a nice way to size your table columns.

We've coupled this with a `width` of 100%, meaning that the table will fill any container it is put in, and be nicely responsive (although it would still need some more work to get it looking good on narrow screen widths).

A `border-collapse` value of `collapse` is a standard best practice for any table styling effort. By default, when you set borders on table elements, they will all have spacing between them, and it doesn't look very nice. It's like having double borders. But with `border-collapse: collapse;` set, the borders collapse down into one, which looks much better. 

We then put a border around the entired table, which is needed because we'll be putting some borders round the table header and footer later on - it looks really odd and disjointed when you don't have a border round the whole outside of the table and end up with gaps.

We've also set some `padding` on the <th> and <td> elements - this gives the data items some space to breathe, making the table look a lot more legible.

At this point, our table already looks a lot better.

--- SOME SIMPLE TYPOGRAPHY ---
First of all, we've found a font on Google Fonts that is suitable for a table about punk bands. You can go there and find a different one if you like. 

First, add the following <link> element to your HTML head, just above your existing <link> element.

There's nothing really specific  to tables here; we are generally tweaking the font styling to make things easier to read:
  We have set global sans-serif font stack; this is purely a stylistic choice. We've also set our custom font on the headings inside the <thead> and <tfoot> elements, for a nice grungy, punky look.
  We've set some `letter-spacing` on the headings and cells, as we feel it aids readability. Again, mostly a stylistic choice.
  We've center-aligned the text in the table cells inside the <tbody> so that they line up with the headings. By default, cells are given a `text-align` value of `left`, and headings are given a value of `center`, but generally it looks better to have alignments set the same for both. The default bold weight on the heading fonts is enough to differentiate their look.
  We've right-aligned the heading inside the <tfoot> so that it is visually associated better with its data poiint.

--- GRAPHICS AND COLORS ---
Again there's nothing specific to table here, but it's worthwhile to note a few things.

We've added a `background-image` to the <thead> and <tfoot>, and changed the `color` of all the text inside the header and footer to white (and given it a text-shadow) so it is more readable. You should always make sure your text contrasts well with your backround, so it is readable.

We've also added a linear gradient to the <th> and <td> elements inside the header and footer for a nice bit of texture, as well as giving those elements a bright purple border. It is useful to have multiple nested elements available so you can layer styles on top of one another. Yes, we could have put both the background image and the linear gradient on the <thead> and <tfoot> elements using multiple background images, but we decided to do it separately for the benefit of older browsers that don't support multiple background images or linear gradients.

### Zebra Striping ###
We wanted to dedicate a separate section to showing you how to implement **zebra stripes** - alternating rows of color that make the different data rows in your table easier to parse and read.

Earlier we saw the `:nth-child` selector being used to select specific child elements. It can also be given a formula as a parameter, so it will select a sequence of elements. The formula `2n-1` would select all the odd numbered children (1,3,5,etc.) and the formula `2n` would select all the even numbered children (2,4,6,etc). 

We've used the `odd` and `even` keywords in our code, which do exactly the same things as the aforementioned formulae.

We've also added a repeating background tile to all the body rows, which is just a bit of noise (a semi-transparent .png with a bit of visual distortion on it) to provide some texture.

Lastly, we've given the entire table a solid background color so that browsers that don't support the `:nth-child` select still have a background for their body rows.

--- STYLING THE CAPTION ---
There is one last thing to do with our table - style the caption.

There's nothing remarkable going on here, except for the `caption-side` property, which has been given a value of `bottom`. This cause the caption to be positioned on the bottom of the table, which along with the other declarations gives us this final look!

## Table Styling Quick Tips ##
* Make your table markup as simple as possible, and keep things flexible, e.g. by using percentages, so the design is more responsive.
* Use `table-layout: fixed` to create a more predictable table layout that allows you to easily set column widths by setting `width` on their headings (<th>).
* Use `border-collapse: collapse` to make table elements borders collapse into each other, producing a neater and easier to control look.
* Use <thead> and <tbody> and <tfoot> to break up your table into logical chunks and provide extra places to apply CSS to, so it is easier to layer styles on top of one another if required.
* Use zebra striping to make alternative rows easier to read.
* Use `text-align` to line up your <th> and <td> text, to make things neater and easier to follow.
