for _ in range(int(input())):
    dollars, total_flavors = [int(input()) for i in range(2)]
    flavors_costs = list(map(int, input().strip().split()))

    flavors = {}
    for i, cost in enumerate(flavors_costs):
        flavors[cost] = flavors.get(cost, []) + [i + 1]

    for cost in flavors_costs:
        if dollars - cost in flavors:
            if cost * 2 != dollars:
                print(flavors[cost][0], flavors[dollars - cost][0])
                break
            elif len(flavors[cost]) >= 2:
                print(flavors[cost][0], flavors[cost][1])
                break
