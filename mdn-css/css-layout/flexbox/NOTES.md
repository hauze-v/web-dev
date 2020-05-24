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