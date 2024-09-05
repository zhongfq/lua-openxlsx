package.cpath = "./build/?.so;" .. package.cpath

local XLDocument = require "openxlsx.XLDocument"

local doc = XLDocument.new("attr.xlsx")
local workbook = doc:workbook()
local sheet = workbook:worksheet("attr")
print(sheet, sheet:cell(1, 1):value().string)
print(sheet, sheet:cell("A6").string)
print(sheet, sheet:cell(5, 1):value():typeAsString())

for i = 1, sheet:columnCount() do
    print("col", i, sheet:cell(4, i).string)
end