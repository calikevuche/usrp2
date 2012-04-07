/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x79f3f3a8 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/UHD-MirrorE100/UHD-Mirror/fpga/usrp2/top/E1x0/build-E100/comparator_component.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2664);
    *((int *)t2) = 1;
    t3 = (t0 + 2208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Always_55_1(char *t0)
{
    char t13[8];
    char t16[8];
    char t45[8];
    char t80[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2672);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 1656);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB13:    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t13);
    t8 = (t6 & t7);
    *((unsigned int *)t16) = t8;
    t17 = (t3 + 4);
    t18 = (t13 + 4);
    t19 = (t16 + 4);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB15;

LAB16:
LAB17:    t43 = (t0 + 1152U);
    t44 = *((char **)t43);
    t46 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t44);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t43 = (t16 + 4);
    t49 = (t44 + 4);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB18;

LAB19:
LAB20:    t76 = (t0 + 1656);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t81 = (t78 + 4);
    if (*((unsigned int *)t81) != 0)
        goto LAB22;

LAB21:    t82 = (t79 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t78) > *((unsigned int *)t79))
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t45);
    t86 = *((unsigned int *)t80);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t45 + 4);
    t89 = (t80 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB26;

LAB27:
LAB28:    t116 = (t84 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t84);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 1656);
    t5 = (t2 + 36U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB33;

LAB32:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB34;

LAB35:    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t13);
    t8 = (t6 & t7);
    *((unsigned int *)t16) = t8;
    t17 = (t3 + 4);
    t18 = (t13 + 4);
    t19 = (t16 + 4);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t20 = (t9 | t10);
    *((unsigned int *)t19) = t20;
    t21 = *((unsigned int *)t19);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB37;

LAB38:
LAB39:    t43 = (t0 + 1152U);
    t44 = *((char **)t43);
    t46 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t44);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t43 = (t16 + 4);
    t49 = (t44 + 4);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB40;

LAB41:
LAB42:    t76 = (t0 + 1656);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng3)));
    memset(t80, 0, 8);
    t81 = (t78 + 4);
    if (*((unsigned int *)t81) != 0)
        goto LAB44;

LAB43:    t82 = (t79 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t78) > *((unsigned int *)t79))
        goto LAB45;

LAB46:    t85 = *((unsigned int *)t45);
    t86 = *((unsigned int *)t80);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t45 + 4);
    t89 = (t80 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB48;

LAB49:
LAB50:    t116 = (t84 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t84);
    t120 = (t119 & t118);
    t121 = (t120 != 0);
    if (t121 > 0)
        goto LAB51;

LAB52:
LAB53:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB15:    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t16) = (t23 | t24);
    t25 = (t3 + 4);
    t26 = (t13 + 4);
    t27 = *((unsigned int *)t3);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t37);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & t38);
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t37);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t38);
    goto LAB17;

LAB18:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t45) = (t56 | t57);
    t58 = (t16 + 4);
    t59 = (t44 + 4);
    t60 = *((unsigned int *)t16);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t74 & t70);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    goto LAB20;

LAB22:    t83 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t80) = 1;
    goto LAB24;

LAB26:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t45 + 4);
    t99 = (t80 + 4);
    t100 = *((unsigned int *)t45);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t80);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB28;

LAB29:    xsi_set_current_line(58, ng0);
    t122 = ((char*)((ng3)));
    t123 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t123, t122, 0, 0, 1, 0LL);
    goto LAB31;

LAB33:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB37:    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t19);
    *((unsigned int *)t16) = (t23 | t24);
    t25 = (t3 + 4);
    t26 = (t13 + 4);
    t27 = *((unsigned int *)t3);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t37);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & t38);
    t41 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t41 & t37);
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & t38);
    goto LAB39;

LAB40:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t45) = (t56 | t57);
    t58 = (t16 + 4);
    t59 = (t44 + 4);
    t60 = *((unsigned int *)t16);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t44);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t74 & t70);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    goto LAB42;

LAB44:    t83 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t80) = 1;
    goto LAB46;

LAB48:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t45 + 4);
    t99 = (t80 + 4);
    t100 = *((unsigned int *)t45);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t80);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB50;

LAB51:    xsi_set_current_line(61, ng0);
    t122 = ((char*)((ng1)));
    t123 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t123, t122, 0, 0, 1, 0LL);
    goto LAB53;

}

static void Cont_68_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2724);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 2680);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003312206156_1062029184_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Always_55_1,(void *)Cont_68_2};
	xsi_register_didat("work_m_00000000003312206156_1062029184", "isim/cs_component_tb_isim_beh.exe.sim/work/m_00000000003312206156_1062029184.didat");
	xsi_register_executes(pe);
}
