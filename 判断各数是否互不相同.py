def fun(string):
    result = 0
    s_plus = copy.deepcopy(string)
    for item in string:
        s_plus.remove(item)
        if item in string:
            result = 1
    return result


s_temp = [4, 5, 12, 6, 78, 24]

fun(s_temp)