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
	{ 0xd5da612d, "param_ops_short" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9676dc28, "dvb_dmx_swfilter" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x55601ffa, "dvb_frontend_detach" },
	{ 0xcfb0e87b, "dvb_unregister_frontend" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x37a0cba, "kfree" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xd033feb5, "dvb_unregister_adapter" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xf9e60eda, "dvb_dmx_release" },
	{ 0x715823a3, "dvb_dmxdev_release" },
	{ 0xb0badc5a, "dvb_dmxdev_init" },
	{ 0x8a43b821, "dvb_dmx_init" },
	{ 0xdb80b15, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x1d050927, "dvb_register_adapter" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xdcb764ad, "memset" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "ECF62DA5F50DAE0FDA24EBD");
