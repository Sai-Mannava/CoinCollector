local coin = script.Parent
local value = 10  -- Adjust the value of the coin as needed

function onTouch(otherPart)
    local character = otherPart.Parent
    local player = game.Players:GetPlayerFromCharacter(character)

    if player then
        player.leaderstats.Points.Value = player.leaderstats.Points.Value + value
        coin:Destroy()  -- Remove the coin when touched
    end
end

coin.Touched:Connect(onTouch)
