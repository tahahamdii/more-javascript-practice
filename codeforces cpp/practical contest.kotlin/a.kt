fun main() {
    val t = readLine()!!.toInt()

    repeat(t) {
        val (x, y) = readLine()!!.split(" ").map { it.toInt() }
        
        val min = minOf(x, y)
        val max = maxOf(x, y)

        println("$min $max")
    }
}
