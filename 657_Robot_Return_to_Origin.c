bool judgeCircle(char* moves) {
    int moveStepX = 0;
    int moveStepY = 0;
    int maxNum = strlen(moves);
    int count = 0;
    
    for (count = 0; count <maxNum;count++)
    {
        switch(moves[count])
        {
            case 'R':
                moveStepX++;
                break;
            case 'L':
                moveStepX--;
                break;
            case 'U':
                moveStepY++;
                break;
            case 'D':
                moveStepY--;
                break;
            default:
                break;
        }
    }
    
    if ((moveStepX == 0) &&
        (moveStepY == 0))
    {
        return true;
    }

    return false;
}
