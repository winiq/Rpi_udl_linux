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

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0xb2c768b1, "devm_iio_triggered_buffer_setup_ext" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "F272B0CB528BBEB4D3B43A5");
