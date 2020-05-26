# Grids #
CSS Grid layout is a two-dimensional layout system for the web. It let's you lay content out in rows and columns, and has many features that make building complex layouts straightforward. This article will give you all you need to know to get started with page layout.

## What is grid layout? ##
A grid is a collection of horizontal and vertical lines creating a pattern against which we can line up our design elements. They help us create designs where elements don't jump around or change width as we move from page to page, providing greater consistency on our websites.

A grid will typically have **columns**, **rows**, and then gaps between each row and column - commonly referred to as **gutters**.

## Creating your grid in CSS ##
Having decided on the grid that your design needs, you can use CSS grid layout to create that grid in CSS and place items onto it. We'll look at the basic features of Grid Layout first and then explore how to create a simple grid system for your project.

--- DEFINING A GRID ---
We'll start with an example file called starting-point.html

It has an example with a container, which has some child items. By default these display in normal flow so the boxes display one below the other.

To define a grid we use the `grid` value of the `display` property. As with Flexbox, this switches on Grid Layout, and all of the direct children of the container become grid items. Add this to your CSS file:

.container {
  display: grid;
}

Unlike flexbox, the items will not immediately look any different. Declaring `display: grid` gives you one a one column grid, so your items will continue to display one below the other as they do in normal flow.

To see something that looks more grid-like, we will need to add some columns to the grid. Let's add three 200-pixel columns here. You can use any length unit, or percentages to create these column tracks.

`grid-template-columns: 200px 200px 200px;`

--- FLEXIBLE GRIDS WITH THE FR UNIT ---
In addition to creating grids using lengths and percentages, we can use th `fr unit` to flexibly size grid rows and columns. This unit represents one fraction of the available space in the grid container.

Change your track listing to the following definition, creating three `1fr` tracks.

.container {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
}

You should now see that you have flexible tracks. The `fr` unit distributes space in proportion, therefore you can give different positive values to your tracks, for example if you change the definition like so:

.container {
  display: grid;
  grid-template-columns: 2fr 1fr 1fr;
}

The first track now gets `2fr` of the available space and the other two tracks get `1fr`, making the first track larger. You can mix `fr` units and fixed length tracks - in such a case the space needed for the fixed tracks is taken away before the space is distributed to the other tracks.

**Note**: The `fr` unit distributes *available* space, not *all* space. Therefore if one of your tracks has something large inside it there will be less free space to share out.

--- GAPS BETWEEN TRACKS ---
