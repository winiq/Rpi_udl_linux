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
	{ 0xed33f52c, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x84808bcd, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26a7300c, "driver_register" },
	{ 0x6d5cb7bc, "of_find_matching_node_and_match" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xcdc984a, "hwmon_device_unregister" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7392091d, "device_register" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9e23d432, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0x3e367d17, "flush_signals" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x81822a88, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x195a3b57, "sysfs_create_groups" },
	{ 0x7f3cfab8, "sysfs_remove_groups" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "63C56DB5BB3AD7563B538DE");
