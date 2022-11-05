#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x826655e4, "param_ops_int" },
	{ 0xb0d42cd1, "hdlcdrv_unregister" },
	{ 0x845f9ff0, "hdlcdrv_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x422dc463, "hdlcdrv_arbitrate" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x62b6c92e, "hdlcdrv_receiver" },
	{ 0x9ab30bea, "hdlcdrv_transmitter" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x349cba85, "strchr" },
	{ 0x92997ed8, "_printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "hdlcdrv");


MODULE_INFO(srcversion, "9987830BA167EC231D51DD3");
