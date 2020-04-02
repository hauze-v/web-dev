# HTML Table Basics #
When should you NOT use HTML tables?
  Should be used for tabular data, that's what they were designed for.
  Unfortuntely, a lot of people used to use HTML tables to lay out web pages, e.g. one row to contain the header, one row to contain the content columns one row to contain the footer, etc
  This was because CSS support used to be terrible

Using tables for layout rather than CSS layout techniques is a bad idea. Reasons being:
  1. Layout tables reduce accessibiliy for visually impaired users (it's confusing)
  2. Tables produce tag soup (involve more complex markup structure than proper layout techniques).
  3. Tables are not automatically responsive (headers, sections, articles, and divs default their widths to 100% of the parent)

## Table Headers