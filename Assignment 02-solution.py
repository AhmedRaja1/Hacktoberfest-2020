def calculateArea(width, length):
    return width*length


def calculateTiles(plot_width, plot_length, tile_wdith, tile_length):
    if type(plot_width) == str or type(plot_length) == str or type(tile_wdith) == str or type(tile_length) == str:
        return "Invalid Input"
        
    if plot_width == 0 or plot_length == 0 or tile_wdith == 0 or tile_length == 0:
        return None

    if checkTilesFit(plot_width, plot_length, tile_wdith, tile_length) == True:
        plot_area = calculateArea(plot_width, plot_length)
        tiles_area = calculateArea(tile_wdith, tile_length)
        return plot_area / tiles_area
    
    else:
        return "Not Possible"


def checkTilesFit(plot_width, plot_length, tile_wdith, tile_length):

    if plot_width < 0 or plot_length < 0 or tile_length < 0 or tile_wdith < 0:
        return False
      
    if (plot_width == tile_wdith or 0 == plot_width % tile_wdith) and (plot_length == tile_length or 0 == plot_length % tile_length):
        return True

    elif (plot_width == tile_length or 0 == plot_width % tile_length) and (plot_length == tile_wdith or 0 == plot_length % tile_wdith):
        return True

    elif (plot_length * plot_width == tile_length and tile_wdith == 1) or (plot_length * plot_width == tile_wdith and tile_length == 1):
        return True 

    else:
        return False

if __name__ == "__main__":
    # tiles = calculateTiles(5, 5, 5, -1)
    # print(tiles)

    tiles = checkTilesFit(5, 5, 5, -1)
    print(tiles)

    tiles = calculateTiles(3, 3, 2, 1)
    print(tiles)

    tiles = calculateTiles(6, 2, 2, 1)
    print(tiles)

    tiles = calculateTiles(4, 3, 2, 2)
    print(tiles)