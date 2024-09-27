package.cpath = "./build/?.so;build/Debug/?.dll;" .. package.cpath

local XLDocument = require "openxlsx.XLDocument"
local XLCellReference = require "openxlsx.XLCellReference"

local doc = XLDocument.new("attr.xlsx")
local workbook = doc:workbook()
local sheet = workbook:worksheet("attr")
print(sheet, sheet:cell(1, 1):value().string)
print(sheet, sheet:cell("A6").string)
print(sheet, sheet:cell(5, 1):value():typeAsString())

for i = 1, sheet:columnCount() do
    print("col", i, sheet:cell(4, i).string)
end

local ref = XLCellReference.new("C1")
print("#",ref, ref:address())
print(sheet:cell(ref))

print("iterator range:")
for _, v in pairs(sheet:range("A1", "C3")) do
    ---@cast v openxlsx.XLCell
    print(_, v:value().string)
end
