class Solution
{
public:
    bool isPathCrossing(string path)
    {
        int a = 0, b = 0;
        string result = to_string(a) + " " + to_string(b) + ", ";

        unordered_set<string> visitedPoints;
        visitedPoints.insert(result);

        for (int i = 0; i < path.size(); ++i)
        {
            string newStr;

            if (path[i] == 'N')
            {
                a++;
            }
            else if (path[i] == 'S')
            {
                a--;
            }
            else if (path[i] == 'E')
            {
                b++;
            }
            else if (path[i] == 'W')
            {
                b--;
            }

            newStr = to_string(a) + " " + to_string(b) + ", ";

            if (visitedPoints.count(newStr) > 0)
            {
                return true;
            }

            visitedPoints.insert(newStr);
        }

        return false;
    }
};