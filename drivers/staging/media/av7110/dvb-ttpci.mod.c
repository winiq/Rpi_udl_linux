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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xfc6380e5, "dvb_ringbuffer_free" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebbc2d9b, "dvb_ringbuffer_init" },
	{ 0xdf9dfc91, "saa7146_vfree_destroy_pgtable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8a43b821, "dvb_dmx_init" },
	{ 0xd033feb5, "dvb_unregister_adapter" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xebd9ac9, "saa7146_vmalloc_build_pgtable" },
	{ 0xb53b05e6, "saa7146_setgpio" },
	{ 0xdb80b15, "dvb_register_frontend" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xbf6b8eb, "dvb_register_device" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x91a6794b, "dvb_ringbuffer_read_user" },
	{ 0xcfb0e87b, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xe2ff9644, "saa7146_stop_preview" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdbf058d, "saa7146_set_hps_source_and_sync" },
	{ 0x24428be5, "strncpy_from_user" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0xbbf919c8, "dvb_net_release" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0x6181aec0, "dvb_ringbuffer_flush_spinlock_wakeup" },
	{ 0x55601ffa, "dvb_frontend_detach" },
	{ 0xd114616a, "ttpci_eeprom_parse_mac" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x39f6b5a8, "saa7146_register_device" },
	{ 0x2f5cdf80, "dvb_ringbuffer_write" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x9f64a537, "default_llseek" },
	{ 0xd5da612d, "param_ops_short" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x715823a3, "dvb_dmxdev_release" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x1ae59325, "saa7146_unregister_device" },
	{ 0xeb18274b, "dvb_net_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2a49c9b2, "dvb_generic_release" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0xd9bfde2, "dvb_unregister_device" },
	{ 0xf9e60eda, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb99d25e1, "saa7146_start_preview" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xfb09f39a, "dvb_ringbuffer_read" },
	{ 0xe37d4b98, "i2c_del_adapter" },
	{ 0xe6d13fd0, "saa7146_register_extension" },
	{ 0xa9b26d67, "dvb_generic_ioctl" },
	{ 0x1dcd1baf, "dvb_dmx_swfilter_packets" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa370862, "dvb_generic_open" },
	{ 0x92997ed8, "_printk" },
	{ 0xe138ce6b, "dvb_ringbuffer_avail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x1d050927, "dvb_register_adapter" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbc3fdb4e, "saa7146_vv_release" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3352dd2, "dvb_ringbuffer_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x10ae0841, "dma_sync_sg_for_cpu" },
	{ 0xb49e1163, "saa7146_i2c_adapter_prepare" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7183347f, "saa7146_wait_for_debi_done" },
	{ 0x577354a2, "saa7146_vv_init" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x60720c96, "saa7146_unregister_extension" },
	{ 0xb0badc5a, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,saa7146,saa7146_vv,ttpci-eeprom");

MODULE_ALIAS("pci:v00001131d00007146sv0000110Asd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001002bc*sc*i*");

MODULE_INFO(srcversion, "8AD00A08FB48F7AE1A9CDB3");
