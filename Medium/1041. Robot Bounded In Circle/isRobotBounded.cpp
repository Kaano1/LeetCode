class Solution {
public:
    typedef struct s_player
    {
        int x;
        int y;
        int axis;
    } player;

    int always_positive(int num)
    {
        if (num < 0)
            return (-1 * num);
        return (num);
    }

    bool isRobotBounded(string instructions) {
        player me;
        int i;
        int fr = -1;

        me.x = 0;
        me.y = 0;
        me.axis = 0;
        while (++fr < 4)
        {
            i = -1;
            while (instructions[++i])
            {
                if (instructions[i] == 'L' && me.axis == 0)
                    me.axis = 360;
                (instructions[i] == 'G' ? (always_positive(me.axis) == 180 || always_positive(me.axis) == 0 ? (always_positive(me.axis) == 180 ? me.y -= 1 : me.y += 1 ) : (always_positive(me.axis) != 90 ? me.x += 1 : me.x -= 1)) : (instructions[i] == 'L' ? me.axis -= 90 : me.axis += 90));
                if (always_positive(me.axis) >= 360)
                    me.axis = 0;
            }
            if (me.y == 0 && me.x == 0)
                return (true);
        }
        return (false);
    }
};