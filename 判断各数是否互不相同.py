def fun(lst):
    result = 0
    s_plus = copy.deepcopy(lst)
    for item in lst:
        s_plus.remove(item)
        if item in lst:
            result = 1
    return result


s_temp = [4, 5, 12, 6, 78, 24]

fun(s_temp)