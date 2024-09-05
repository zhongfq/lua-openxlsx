---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLCommandType

---@type openxlsx.XLCommandType
local VALUE

---
---@enum openxlsx.XLCommandType
---@operator call(integer): openxlsx.XLCommandType
local XLCommandType = {
    AddChartsheet = 10,
    AddSharedStrings = 8,
    AddWorksheet = 9,
    CheckAndFixCoreProperties = 6,
    CheckAndFixExtendedProperties = 7,
    CloneSheet = 12,
    DeleteSheet = 11,
    ResetCalcChain = 5,
    SetSheetActive = 4,
    SetSheetColor = 1,
    SetSheetIndex = 3,
    SetSheetName = 0,
    SetSheetVisibility = 2,
}

---@param v integer
---@return openxlsx.XLCommandType
function XLCommandType:__call(v) end

return XLCommandType