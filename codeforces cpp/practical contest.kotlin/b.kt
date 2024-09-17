import kotlin.math.sqrt

fun main() {
    val t = readLine()!!.toInt() 
    repeat(t) {
        val n = readLine()!!.toInt() 
        val s = readLine()!!

        val sqrtN = sqrt(n.toDouble()).toInt()
        if (sqrtN * sqrtN != n) {
            println("No")
        } else {
            val r = sqrtN
            val c = sqrtN
            var isBeautiful = true

            for (i in 0 until r) {
                for (j in 0 until c) {
                    val index = i * c + j
                    if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                        if (s[index] != '1') {
                            isBeautiful = false
                            break
                        }
                    } else {
                        if (s[index] != '0') {
                            isBeautiful = false
                            break
                        }
                    }
                }
                if (!isBeautiful) break
            }

            if (isBeautiful) println("Yes") else println("No")
        }
    }
}
