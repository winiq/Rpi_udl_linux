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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3a0d9ed, "devm_gpiod_get_index_optional" },
	{ 0x98cf60b3, "strlen" },
	{ 0x45b114d, "framebuffer_release" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xff1ee9ed, "fb_sys_read" },
	{ 0x84744745, "backlight_device_register" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x354d4c75, "sys_copyarea" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfc460a4b, "register_framebuffer" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xae90c37c, "sys_fillrect" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb1b62027, "sys_imageblit" },
	{ 0xddfdbc26, "fb_sys_write" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0xa9dc31a6, "framebuffer_alloc" },
	{ 0xfbc7ec2d, "fb_deferred_io_cleanup" },
	{ 0x175a92e9, "fb_deferred_io_init" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x96848186, "scnprintf" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4b5a0671, "backlight_device_unregister" },
	{ 0x82d03f76, "param_ops_ulong" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x7a289047, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,syscopyarea,sysfillrect,sysimgblt");


MODULE_INFO(srcversion, "C6037DEDCEC5109D679E6D2");
