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

