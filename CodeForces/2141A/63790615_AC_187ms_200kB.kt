import java.util.StringTokenizer

fun solve(reader: java.io.BufferedReader) {
    val n = reader.readLine().trim().toInt()
    val st = StringTokenizer(reader.readLine())
    val arr = IntArray(n + 1)
    for (i in 1..n) {
        arr[i] = st.nextToken().toInt()
    }

    var minVal = arr[1]
    var totalSuchProduct = 0
    for (i in 2..n) {
        if (arr[i] < minVal) {
            minVal = arr[i]
        } else if (arr[i] >= minVal) {
            totalSuchProduct++
        }
    }
    println(totalSuchProduct)

    minVal = arr[1]
    val indices = mutableListOf<Int>()
    for (i in 2..n) {
        if (arr[i] < minVal) {
            minVal = arr[i]
        } else if (arr[i] >= minVal) {
            indices.add(i)
        }
    }
    if (indices.isEmpty()) {
        println()
    } else {
        println(indices.joinToString(" "))
    }
    println()
}

fun main() {
    val reader = System.`in`.bufferedReader()
    val t = reader.readLine().trim().toInt()
    repeat(t) {
        solve(reader)
    }
}
