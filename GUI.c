-- Insert this code into a new Script in the StarterPack

local Players = game:GetService("Players")

-- Function to create GUI for players
function createGUI(player)
    local gui = Instance.new("ScreenGui")
    gui.Parent = player.PlayerGui

    local scoreLabel = Instance.new("TextLabel")
    scoreLabel.Parent = gui
    scoreLabel.Position = UDim2.new(0.85, 0, 0.05, 0)
    scoreLabel.Size = UDim2.new(0.1, 0, 0.1, 0)
    scoreLabel.Text = "Score: 0"
    scoreLabel.TextSize = 20

    return scoreLabel
end

-- Initialize GUI for each player
Players.PlayerAdded:Connect(function(player)
    local scoreLabel = createGUI(player)

    -- Handle score updates
    player.leaderstats.Points.Changed:Connect(function()
        scoreLabel.Text = "Score: " .. player.leaderstats.Points.Value
    end)
end)
