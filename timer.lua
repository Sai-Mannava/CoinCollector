local RunService = game:GetService("RunService")
local Players = game:GetService("Players")

local gameDuration = 300  -- Adjust the game duration in seconds

function startTimer(player)
    local timer = Instance.new("IntValue")
    timer.Name = "Timer"
    timer.Value = gameDuration
    timer.Parent = player

    while timer.Value > 0 do
        timer.Value = timer.Value - 1
        wait(1)
    end

    -- Game over logic (e.g., show a message, end the game)
    print(player.Name .. " ran out of time!")
    -- You can add more logic here for ending the game, displaying a message, etc.
end

-- Start timer for each player when they join
Players.PlayerAdded:Connect(function(player)
    startTimer(player)
end)

-- Stop timer when a player leaves
Players.PlayerRemoving:Connect(function(player)
    local timer = player:FindFirstChild("Timer")
    if timer then
        timer:Destroy()
    end
end)
