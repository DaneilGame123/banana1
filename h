-- Gui to Lua
-- Version: 3.2

-- Instances:

local ScreenGui = Instance.new("ScreenGui")
local Frame = Instance.new("Frame")
local TextButton1 = Instance.new("TextButton")
local TextBox1 = Instance.new("TextBox")
local TextButton2 = Instance.new("TextButton")
local TextBox2 = Instance.new("TextBox")

--Properties:

ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Frame.Parent = ScreenGui
Frame.BackgroundColor3 = Color3.fromRGB(114, 89, 255)
Frame.BackgroundTransparency = 0.600
Frame.Position = UDim2.new(0, 0, 0.560846508, 0)
Frame.Size = UDim2.new(0, 177, 0, 138)

TextButton1.Name = "TextButton1"
TextButton1.Parent = ScreenGui
TextButton1.BackgroundColor3 = Color3.fromRGB(255, 0, 4)
TextButton1.Position = UDim2.new(0, 0, 0.57495594, 0)
TextButton1.Size = UDim2.new(0, 84, 0, 31)
TextButton1.Font = Enum.Font.SourceSans
TextButton1.Text = "Gravity h"
TextButton1.TextColor3 = Color3.fromRGB(0, 0, 0)
TextButton1.TextSize = 14.000

TextBox1.Name = "TextBox1"
TextBox1.Parent = ScreenGui
TextBox1.BackgroundColor3 = Color3.fromRGB(17, 255, 0)
TextBox1.Position = UDim2.new(0, 0, 0.647266209, 0)
TextBox1.Size = UDim2.new(0, 84, 0, 28)
TextBox1.Font = Enum.Font.SourceSans
TextBox1.Text = "33"
TextBox1.TextColor3 = Color3.fromRGB(0, 0, 0)
TextBox1.TextSize = 14.000

TextButton2.Name = "TextButton2"
TextButton2.Parent = ScreenGui
TextButton2.BackgroundColor3 = Color3.fromRGB(255, 0, 4)
TextButton2.Position = UDim2.new(0.115384616, 0, 0.57495594, 0)
TextButton2.Size = UDim2.new(0, 84, 0, 31)
TextButton2.Font = Enum.Font.SourceSans
TextButton2.Text = "Speed lmao"
TextButton2.TextColor3 = Color3.fromRGB(0, 0, 0)
TextButton2.TextSize = 14.000

TextBox2.Name = "TextBox2"
TextBox2.Parent = ScreenGui
TextBox2.BackgroundColor3 = Color3.fromRGB(17, 255, 0)
TextBox2.Position = UDim2.new(0.115384616, 0, 0.647266209, 0)
TextBox2.Size = UDim2.new(0, 84, 0, 28)
TextBox2.Font = Enum.Font.SourceSans
TextBox2.Text = "33"
TextBox2.TextColor3 = Color3.fromRGB(0, 0, 0)
TextBox2.TextSize = 14.000

-- Scripts:

local function SPJEIJ_fake_script() -- TextButton1.GuiClick_Script 
	local script = Instance.new('LocalScript', TextButton1)

	function OnClicked() 
		game.Workspace.Gravity = script.Parent.Parent.TextBox1.Text
	end 
	
	script.Parent.MouseButton1Down:connect(OnClicked)
end
coroutine.wrap(SPJEIJ_fake_script)()
local function QTLGC_fake_script() -- TextButton2.GuiClick_Script 
	local script = Instance.new('LocalScript', TextButton2)

	function OnClicked() 
		game.Workspace.DaneilGame123.Humanoid.WalkSpeed = script.Parent.Parent.TextBox2.Text
	end 
	
	script.Parent.MouseButton1Down:connect(OnClicked)
end
coroutine.wrap(QTLGC_fake_script)()
local function BLQXVW_fake_script() -- ScreenGui.LocalScript 
	local script = Instance.new('LocalScript', ScreenGui)

	game:GetService("UserInputService").InputBegan:Connect(function(Input)
		if Input.KeyCode == Enum.KeyCode["RightShift"] then
			if script.Parent.Enabled == true then
				script.Parent.Enabled = false
			elseif script.Parent.Enabled == false then
				script.Parent.Enabled = true
			end
		end
	end)
end
coroutine.wrap(BLQXVW_fake_script)()
