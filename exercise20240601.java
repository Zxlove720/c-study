package demo1;
import java.util.Scanner;
public class exercise20240601 {
// 九九乘法表
//public class exercise20240527 {
//    public static void main(String[] args) {
//        int i;
//        int j;
//        for(i = 1; i <= 9; i++){
//            for(j = 1; j <= i; j++){
//                System.out.printf("%d*%d=%2d  ", j, i, j * i);
//            }
//            System.out.printf("\n");
//        }
//    }
//}

//伟大的6
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入第一个数字");
//        int number1 = sc.nextInt();
//        System.out.println("请输入第二个数字");
//        int number2 = sc.nextInt();
//        int sum = number1 + number2;
////        if(number1 == 6 || number2 == 6){
////            System.out.println(true);
////        }
////        else if(sum % 6 == 0) {
////            System.out.println(true);
////        }
////        else{
////            System.out.println(false);
////        }
//        //简化版本
//        System.out.println(number1 == 6 || number2 == 6 || sum % 6 == 0);
//    }
//}

//两只老虎
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入第一只老虎的体重");
//        int tiger1 = sc.nextInt();
//        System.out.println("请输入第二只老虎的体重");
//        int tiger2 = sc.nextInt();
//        String result = tiger1 == tiger2? "相同" : "不同";
//        System.out.println(result);
//    }
//}

//"自动驾驶"
//public class exercise20240527{
//    public static void main(String[] args){
//        boolean red_light, yellow_light, green_light;
//        red_light = true;
//        yellow_light = true;
//        green_light = true;
//        if (red_light = true){
//            yellow_light = false;
//            green_light = false;
//        }
//        if(red_light){
//            System.out.println("stop");
//        }
//        else if(green_light){
//            System.out.println("gogogo");
//        }
//        else{
//            System.out.println("slow down");
//        }
//    }
//}

//影院选座
//import java.util.Scanner;
//public class exercise20240527{
//    public static void main(String[] args){
//     Scanner sc = new Scanner(System.in);
//     System.out.println("请输入你的票号(1-100)");
//     int tickt = sc.nextInt();
//     if(tickt >= 0 && tickt <= 100){
//         if(tickt % 2 == 0){
//             System.out.println("是偶数,请坐右边");
//         }
//         else{
//             System.out.println("是奇数,请坐左边");
//         }
//     }
//     else{
//         System.out.println("无效票,请练习工作人员");
//     }
//    }
//}

//会员打折
//
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入商品的总价(小数点后两位)");
//        double price = sc.nextDouble();
//        System.out.println("请输入你的会员等级");
//        int level = sc.nextInt();
//        if(level >= 1 && level <= 3){
//            if(level == 1){
//                System.out.println("您是1级会员，打9折");
//                price *= 0.9;
//                System.out.printf("您需要付款%.2f", price);
//            }
//            else if(level == 2){
//                System.out.println("您是2级会员，打8折");
//                price *= 0.8;
//                System.out.printf("您需要付款%.2f", price);
//            }
//            else{
//                System.out.println("您是3级会员，打7折");
//                price *= 0.7;
//                System.out.printf("您需要付款%.2f", price);
//            }
//        }
//        else {
//            System.out.printf("您的会员等级不合法,你需要支付%.2f", price);
//        }
//    }
//}

//计算BMI
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入你的身高(m)");
//        double height = sc.nextDouble();
//        System.out.println("请输入你的体重(kg)");
//        double weight = sc.nextDouble();
//        double BMI = weight / (height * height);
//        System.out.printf("你的BMI是%.2f", BMI);
//        if(BMI < 17.6 && BMI > 0){
//            System.out.println("你偏瘦了");
//        }
//        else if(BMI >= 17.6 && BMI < 25.0){
//            System.out.println("你处于正常范围");
//        }
//        else if(BMI >= 25.0 && BMI < 28.0){
//            System.out.println("你超重了");
//        }
//        else{
//            System.out.println("你处于肥胖范围");
//        }
//    }
//}

// switch 练习
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        int week = sc.nextInt();
//        // 经典switch
////        switch(week){
////            case 1:
////                System.out.println("星期一");
////                break;
////            case 2:
////                System.out.println("星期二");
////                break;
////            case 3:
////                System.out.println("星期三");
////                break;
////            case 4:
////                System.out.println("星期四");
////                break;
////            case 5:
////                System.out.println("星期五");
////                break;
////            case 6:
////                System.out.println("星期六");
////                break;
////            case 7:
////                System.out.println("星期日");
////                break;
////            default:
////                System.out.println("没有这个星期");
////                break;
////        }
//        // switch 新特性
//        // 使用新特性则可以不用写break
//        // 通过->来替代:
////        switch(week){
////            case 1 -> {
////                System.out.println("星期一");
////            }
////            case 2 -> {
////                System.out.println("星期二");
////            }
////            case 3 -> {
////                System.out.println("星期三");
////            }
////            case 4 -> {
////                System.out.println("星期四");
////            }
////            case 5 -> {
////                System.out.println("星期五");
////            }
////            case 6 -> {
////                System.out.println("星期六");
////            }
////            case 7 -> {
////                System.out.println("星期日");
////            }
////            default -> {
////                System.out.println("输入不合法");
////            }
////        }
//        // 假如每个case里面只有一条语句,则可以省略括号,写成如图所示
//        switch(week){
//            case 1 -> System.out.println("周一");
//            case 2 -> System.out.println("周二");
//            case 3 -> System.out.println("周三");
//            case 4 -> System.out.println("周四");
//            case 5 -> System.out.println("周五");
//            case 6 -> System.out.println("周六");
//            case 7 -> System.out.println("周日");
//            default -> System.out.println("输入不合法");
//        }
//    }
//}

// 使用一行三元运算符找到三个数中的最大值
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入三个数");
//        int a = sc.nextInt();
//        int b = sc.nextInt();
//        int c = sc.nextInt();
//        int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
//        System.out.println(max);
//    }
//}

// 求和
//public class exercise20240527{
//    public static void main(String[] args){
////        int i;
////        int sum = 0;
////        for(i = 1; i <= 100; i++){
////            if(i % 2 == 0){
////                sum += i;
////            }
////        }
////        System.out.println(sum);
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入第一个数字");
//        int range1 = sc.nextInt();
//        System.out.println("请输入第二个数字");
//        int range2 = sc.nextInt();
//        int i;
//        int sum = 0;
//        int count = 0;
//        for(i = range1; i <= range2; i++){
//            if(i % 3 == 0 && i % 5 == 0){
//                sum += i;
//                count++;
//            }
//        }
//        System.out.println(sum);
//        System.out.println(count);
//    }
//}

//回文数
//
//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入一个数字");
//        int x = sc.nextInt();
//        int temp = x;
//        int number = 0;
//        int mid = 0;
//        while(temp > 0){
//            mid = temp % 10;
//            number = number * 10 + mid;  // 每次将从x中取下来的数字拼接在右边
//            temp /= 10;
//        }
//        if(number == x){
//            System.out.println(true);
//        }
//        else {
//            System.out.println(false);
//        }
//    }
//}

//public class exercise20240527{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("请输入被除数");
//        int number1 = sc.nextInt();
//        System.out.printf("请输入除数\n");
//        int number2 = sc.nextInt();
//        int count = 0;
//        int i;
//        for(i = number1; i >= 0; i -= number2){
//            if(i < number2){
//                System.out.println("商是" + count);
//                System.out.println("余数是" + i);
//                break;
//            }
//            count++;
//        }
//    }
//}
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            System.out.println("请输入被除数");
            int number1 = sc.nextInt();
            int number2;
            while(true){
                System.out.println("请输入除数");
                number2 = sc.nextInt();
                if(number2 != 0){
                    break;
                }
                System.out.println("除数不能为0");
            }
            int count = 0;
            while(number1 >= number2){
                number1 -= number2;
                count++;
            }
            System.out.println("商是" + count);
            System.out.println("余数是" + number1);
        }
    }
