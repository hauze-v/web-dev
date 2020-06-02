# Multiple-column layout #

## A basic example ##
Often referred to as *multicol*.

Our example and starting point contains some very simple HTML; a wrapper with a class of `container` inside which is a heading and some paragraphs.

The <div> with a class of container will become out multicol container. We switch on multicol by using one of two properties `column-count` or `column-width`. The `column-count` property will create as many columns as the value you give it, so if you add the following CSS to your style sheet and reload the page, you'll get three columns: 

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
