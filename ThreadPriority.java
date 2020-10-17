package com.shreyans;
//t1.getName() is used to get the name
//t1.setName() is used to set the name
//Priority in the Range of 1 - 10 where 5 is the normal priority
//t1.getPriority() is used to get the priority of the thread
//t1.setPriority() is used to set the priority of the thread
//Where 1 is the lowest priority or can use Thread.MIN_PRIORITY
//Where 10 is the Highest priority or can use Thread.MAX_PRIORITY

public class ThreadPriority{

    public static void main(String[] args) throws Exception{

        Thread t1 = new Thread(() ->
        {
            for (int i =0 ; i<=5;i++){
                System.out.println("Hi");
                try{ Thread.sleep(1000); } catch (Exception e){ }
            }
        },"Hi Thread");//You can set the name here also
        Thread t2 = new Thread(() ->
        {
            for (int i =0 ; i<=5;i++){
                System.out.println("Hello");
                try{ Thread.sleep(1000); } catch (Exception e){ }
            }
        },"Hello Thread" );


        System.out.println(t1.getName());
        System.out.println(t1.getName());
        System.out.println(t1.getPriority());
        System.out.println(t2.getPriority());
        t1.start();
        try {
            Thread.sleep(10);
        } catch (Exception e) {
        }
        t2.start();

        t1.join();
        t2.join();
        System.out.println(t1.isAlive());

        System.out.println("Bye");
    }
}