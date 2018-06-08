from queue import PriorityQueue

def peek(priority_queue):
    return priority_queue.queue[0][1]

def add_number(number, lower, higher):
    if lower.empty() or number < peek(lower):
        lower.put((-number, number))
    else:
        higher.put((number, number))

def rebalance(lower, higher):
    if lower.qsize() > higher.qsize():
        bigger_heap, smaller_heap = lower, higher
    else:
        bigger_heap, smaller_heap = higher, lower
    if bigger_heap.qsize() - smaller_heap.qsize() > 1:
        popped = bigger_heap.get()[1]
        if smaller_heap == lower:
            smaller_heap.put((-popped, popped))
        else:
            smaller_heap.put((popped, popped))

def get_median(lower, higher):
    if lower.qsize() > higher.qsize():
        bigger_heap, smaller_heap = lower, higher
    else:
        bigger_heap, smaller_heap = higher, lower
    if bigger_heap.qsize() == smaller_heap.qsize():
        return (peek(bigger_heap) + peek(smaller_heap)) / 2
    else:
        return peek(bigger_heap)

def get_running_medians(numbers):
    lower, higher = PriorityQueue(), PriorityQueue()
    medians = []
    for number in numbers:
        add_number(number, lower, higher)
        rebalance(lower, higher)
        medians.append(get_median(lower, higher))
        
    return medians

def main():
    n = int(input().strip())
    numbers = [float(input().strip()) for _ in range(n)]
    for median in get_running_medians(numbers):
        print("%.1f" % median)

if __name__ == '__main__':
    main()
