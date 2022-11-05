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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe3270f1b, "freezing_slow_path" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xc6e96ea0, "atm_dev_signal_change" },
	{ 0x93d03a43, "usbatm_usb_probe" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x2d874bed, "kernel_param_unlock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x74c5d0de, "kernel_param_lock" },
	{ 0x4df02057, "crc32_be" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd258a1fa, "usbatm_usb_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "atm,usbatm");

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4AC8EF68852AB20945A7E56");
