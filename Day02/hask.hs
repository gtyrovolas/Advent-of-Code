ans :: String -> String

parse :: String -> [Int]
execute :: [Int] -> [Int]
repack :: [Int] -> String

ans = repack.execute.parse

execute [] = []


parse inp = parseAcc inp ""

parseAcc :: String -> String -> [Int]

parseAcc [] acc = read acc
parseAcc (',':xs) acc = (read ("\\" ++ acc ++ "\\")) : parseAcc xs ""
parseAcc (x:xs) acc = parseAcc xs (acc ++ show x)

repack (x:xs) = show x ++ "," ++ repack xs
repack x = show x
repack [] = ""

