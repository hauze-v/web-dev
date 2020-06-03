# Multiple-column layout #

## A basic example ##
Often referred to as *multicol*.

Our example and starting point contains some very simple HTML; a wrapper with a class of `container` inside which is a heading and some paragraphs.

The <div> with a class of container will become out multicol container. We switch on multicol by using one of two properties `column-count` or `column-width`. The `column-count` property will create as many columns as the value youf give it, so if you add the following CSS to your style sheet and reload the page, you'll get three columns: 

.container {
  column-count: 3;
}

The columns that you create have flexible widths - the browser works out how much space to assign each column.

Change your CSS to use `column-width` as follows: 

.container {
  column-width: 200px;
}

The browser will now give you as many columns as it can of the size that you specify; any remaining space is then shared between the existing columns. This means that you will not get exactly the width that you specify, unless your container is exactly divisble by that width.

## Styling the columns ##
The columns created by multicol cannot be styled individually. There is no way to make one column bigger than other columns, or to change the background or text color of a single column. You have two opportunities to change the way that columns display: 
  * Changing the size of the gap between columns using the `column-gap`
  * Adding a rule between columns with `column-rule`.

Using your example above, change the size of the gap by adding a `column-gap` property: 

.container {
  column-width: 200px;
  column-gap: 20px;
}

The property accepts any length unit. Now add a rule between the columns, with `column-rule`. In a similar way to the `border` property that you encountered in previous lessons, `column-rule` is a shorthand for `column-rule-color`, `column-rule-style`, and `column-rule-width`, and accepts the same values as border.

.container {
  column-count: 3;
  column-gap: 20px;
  column-rule: 4px dotted rgb(79,185,227);
}

Something to take note of, is that the rule does not take up any width of its own. It lies across the gap you created with `column-gap`. To make more space on either side of the rule, you'll need to increase the `column-gap` size.

## Spanning columns ##
You can cause an element to span across all of the columns. In this case the content breaks when the spanning element is introduced and continues below creating a new set of column boxes. To cause an element to span all of the columns use the `column-span` property set to `all`.

**Note**: It isn't possible to cause an element to span some columns. The property can only have the value of `none` (which is the default) or `all`.

## Columns and fragmentation ##
The content of a multi-column layout is fragmented. It essentially behaves the same way as content behaves in paged media - such as when you print a webpage. When you turn your content into a multicol container it is fragemented into columns, and the content breaks to allow this to happen.

Sometimes, this breaking will happen in places that lead to a poor reading experience. In our example, we've used multicol to lay out a series of boxes, each of which have a heading and some text inside. The heading becomes separated from the text if the columns fragment between the two.

To control this behavior we can use properties from the CSS fragmentation specification. This gives us properties to control breaking of content in multicol and in paged media. For example, add the property `break-inside` with a value of `avoid` to the rules for .card. This is the container for the heading and text, and therefore we do not want to fragment this box.

At the present time it's also worth adding the older property `page-break-inside: avoid` for best browser support.

