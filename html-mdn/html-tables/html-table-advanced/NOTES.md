# HTML table advanced features and accessibility #

## Adding a caption to your table with <caption> # 
Simply nest a <caption> element inside your <table> element. 
  Place it directly underneath the <Table> element

## Adding structure with <thread>, <tfoot>, and <tbody> ## 
As your tables get a bit more complex in structure, it's useful to give them more structural definition. One clear way to do this is by using <thead>, <tfoot>, and <tbody>, which allow you to mark up a header, footer, and body section for your table

These elements don't make the table nay more accessible to screenreader users, and don't result in any visual enhancement on their own.
  They are however, very useful for styling and layout -- acting as useful hooks for adding CSS to your table. To give you some interesting examples, in the case of a long table you could make the table header and footer repeat on every printed page, and you could make the table body display on a single page and have the content available by scrolling up and down

To use them:
  The <thead> element must wrap the part of the table that is the header -- this is usually the first row containig the column headings, but this is not necessarily always the case. If you're using <col>/<colgroup> element, the table header should come just below those.

  The <tfoot> element needs to wrap the part of the table that is the footer -- this might be a final row with items in the previous rows summed, for example. You can include the table footer at the bottom of the table as you'd expect, or just below the table header (the browser will still render it at the bottom of the table).

  The <tbody> element needs to wrap the parts of the table that aren't in the header or footer. It will appear below the table header or sometimes footer, depending on how you decided to structure it. 

These elements add structure to your HTML table in such a way that it becomes much easier to select and style specific parts of your table. If you didn't use these table elements, your CSS selectors would have to be much more complicated and complex, like nth-item: etc.

## Nesting Tables ## 
It's possible to nest a table inside another one, as long as you include the complete structure, including the <table> element. This is generally not really advised, as it makes the markup more confusing and less accessible to screenreader users, and in many cases you might as well just insert exxtra cells / rows / columns into the exisitng table. 

It is however sometimes necessary, for example, if you want to import content easily from other sources.

## Tables for visually impaired users ##
Visually impaired people often use a screenreader that reads out information on web pages to them. This is no problem when you're reading plain text, but interpreting a table can be quite a challenge for a blind person. 

Nevertheless, with the proper markup we can replace visual associations by programmatic ones.

In case you're wondering "how many people does this really affect?" - there are around 253 million people living with Visual Impairment according to WHO data in 2017.

### Using column and row headers ###
Screenreaders will identify all headers and use them to make programmatic associations between those headers and the cells they relate to. 

So make sure you use <th> elements! The combination of column and row headers will identify and interpret the data in each cell so that screenreader users can interpret the table similarly to how sighted users do.

### The scope attribute ###
A new topic for this article is the `scope` attribute, which can be added to the <th> element to tell screenreaders exactly what cells the header is a header for -- is it a header for the row it is in, or the column, for example?

Looking back on our spending record example from earlier on, you could unambiguously define the column headers as columns headers like this:

<thead>
  <tr>
    <th scope="col">Purchase</th>
    <th scope="col">Location</th>
    <th scope="col">Date</th>
    <th scope="col">Evaluation</th>
    <th scope="col">Cost (€)</th>
  </tr>
</thead>

Additionally, there are two more possible values for the `scope` attribute: `colgroup` and `rowgroup`
  These are used for headings that sit over the top of multiple columns or rows. 

### The id and headers attributes ###
An alternative to using the scope attribute is to use `id` and `headers` attributes to create associations between headers and cells.

The way they're used are as follows:
  1. You add a unique `id` to each <th> element
  2. You add a `headers` attribute to each <td> element. Each `headers` attribute has to contain a list of the `ids` of all the <th> elements that act as a header for that cell, separated by spaces.

This will give your HTML table an explicit definition of the position of each cell in the table, defined by the header(s) for each column and row it is a part of, kind of like a spreadsheet. For it to work well, the table really needs both column and row headers.

The previous snippet could be rewritten like this:

<thead>
  <tr>
    <th id="purchase">Purchase</th>
    <th id="location">Location</th>
    <th id="date">Date</th>
    <th id="evaluation">Evaluation</th>
    <th id="cost">Cost (€)</th>
  </tr>
</thead>
<tbody>
<tr>
  <th id="haircut">Haircut</th>
  <td headers="location haircut">Hairdresser</td>
  <td headers="date haircut">12/09</td>
  <td headers="evaluation haircut">Great idea</td>
  <td headers="cost haircut">30</td>
</tr>

This method creates very precise associations between headers and data cells but it uses A LOT more markup and does not leave any room for errors. The scope attribute approach is usually enough for most ables