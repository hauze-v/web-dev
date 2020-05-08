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