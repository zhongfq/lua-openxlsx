---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLContentType

---@type openxlsx.XLContentType
local VALUE

---
---@enum openxlsx.XLContentType
---@operator call(integer): openxlsx.XLContentType
local XLContentType = {
    CalculationChain = 13,
    Chart = 9,
    ChartColorStyle = 11,
    ChartStyle = 10,
    Chartsheet = 3,
    Comments = 18,
    ControlProperties = 12,
    CoreProperties = 15,
    CustomProperties = 17,
    Drawing = 8,
    ExtendedProperties = 16,
    ExternalLink = 4,
    SharedStrings = 7,
    Styles = 6,
    Table = 19,
    Theme = 5,
    Unknown = 21,
    VBAProject = 14,
    VMLDrawing = 20,
    Workbook = 0,
    WorkbookMacroEnabled = 1,
    Worksheet = 2,
}

---@param v integer
---@return openxlsx.XLContentType
function XLContentType:__call(v) end

return XLContentType