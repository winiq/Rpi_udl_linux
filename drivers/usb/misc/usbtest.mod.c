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
	{ 0x826655e4, "param_ops_int" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x18601582, "usb_get_descriptor" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x43ccc6cf, "usb_get_status" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xa6257a2f, "complete" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdcb764ad, "memset" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x892621e6, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7c167b80, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6daf954, "usb_sg_cancel" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3AB7D80A3376517FC594B0");
