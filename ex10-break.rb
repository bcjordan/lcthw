args = []

(0 .. ARGV[0].to_i).each do |number|
  args[number] = "okay"
end

exec("./ex10 " + args.join(' '))

#
# Result: 19879 arguments is max. 19879 breaks.
# 
