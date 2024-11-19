---AUTO GENERATED, DO NOT MODIFY!
---@meta openxlsx.XLMergeCells

---This class encapsulate the Excel concept of <mergeCells>. Each worksheet that has merged cells has a list of
---(empty) <mergeCell> elements within that array, with a sole attribute ref="..." with ... being a range reference, e.g. A1:B5
---@class openxlsx.XLMergeCells 
local XLMergeCells = {}

---@return any
function XLMergeCells:__gc() end

---Append a new merge to the list of merges
---@param reference string # The reference to append.
---@return integer # An int32_t with the index of the appended string
---\throws XLInputException if the reference would overlap with an existing reference
function XLMergeCells:appendMerge(reference) end

---get the amount of entries in <mergeCells>
---@return integer # the count of defined cell merges
function XLMergeCells:count() end

---Delete the merge at the given index.
---@param index integer # The index to delete
---\note Previously obtained merge indexes will be invalidated when calling deleteMerge
---\throws XLInputException if the index does not exist
function XLMergeCells:deleteMerge(index) end

---get the index of a <mergeCell> entry by its reference
---@param reference string # the reference to search for
---@return integer # -1 if no such reference exists, 0-based index otherwise
function XLMergeCells:findMerge(reference) end

---get the index of a <mergeCell> entry of which cellReference is a part
---@param cellRef string # the cell reference (string or XLCellReference) to search for in the merged ranges
---@return integer # -1 if no such reference exists, 0-based index otherwise
---@overload fun(self: openxlsx.XLMergeCells, cellRef: openxlsx.XLCellReference|string): integer
function XLMergeCells:findMergeByCell(cellRef) end

---return the cell reference string for the given index
---@param index integer # 
---@return string # 
function XLMergeCells:merge(index) end

---test if a mergeCell with reference exists, equivalent to findMerge(reference) >= 0
---@param reference string # the reference to find
---@return boolean # true if reference exists, false otherwise
function XLMergeCells:mergeExists(reference) end

---@return openxlsx.XLMergeCells
function XLMergeCells.new() end

---@return boolean
function XLMergeCells:uninitialized() end

return XLMergeCells