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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x8125a88d, "hci_recv_diag" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x2565c4e2, "rcuwait_wake_up" },
	{ 0x1b513be7, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x58fb7299, "hci_reset_dev" },
	{ 0x3ce35277, "tty_unthrottle" },
	{ 0xbb8ef1f9, "btbcm_set_bdaddr" },
	{ 0xa21f9693, "btbcm_write_pcm_int_params" },
	{ 0xac1186f6, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3a063e2f, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbecec813, "of_irq_get_byname" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x908054df, "hci_unregister_dev" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad2c9573, "serdev_device_write_buf" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd5a3a154, "serdev_device_set_tiocm" },
	{ 0x6d0b9e10, "acpi_match_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfc2ace19, "__serdev_device_driver_register" },
	{ 0x4875a433, "__percpu_init_rwsem" },
	{ 0x19c66ed3, "tty_ldisc_flush" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x50509c19, "n_tty_ioctl_helper" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92c00af, "serdev_device_write_flush" },
	{ 0x95db00d1, "devm_clk_put" },
	{ 0x49c4e465, "device_property_read_u8_array" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xab0f2cf6, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb8e14fd1, "percpu_up_write" },
	{ 0x42780dbc, "btbcm_read_pcm_int_params" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x4daf0ad3, "tty_driver_flush_buffer" },
	{ 0x6fdfb1a2, "devm_free_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5a2d837, "acpi_dev_get_resources" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x696fc61d, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x5909610f, "serdev_device_set_flow_control" },
	{ 0x9f9b26e7, "btbcm_initialize" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbc544041, "btbcm_finalize" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xfe1e061, "serdev_device_set_baudrate" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x493afacf, "percpu_down_write" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0x8964157d, "tty_set_termios" },
	{ 0xd6f682e9, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("acpi*:BCM2E00:*");
MODULE_ALIAS("acpi*:BCM2E01:*");
MODULE_ALIAS("acpi*:BCM2E02:*");
MODULE_ALIAS("acpi*:BCM2E03:*");
MODULE_ALIAS("acpi*:BCM2E04:*");
MODULE_ALIAS("acpi*:BCM2E05:*");
MODULE_ALIAS("acpi*:BCM2E06:*");
MODULE_ALIAS("acpi*:BCM2E07:*");
MODULE_ALIAS("acpi*:BCM2E08:*");
MODULE_ALIAS("acpi*:BCM2E09:*");
MODULE_ALIAS("acpi*:BCM2E0A:*");
MODULE_ALIAS("acpi*:BCM2E0B:*");
MODULE_ALIAS("acpi*:BCM2E0C:*");
MODULE_ALIAS("acpi*:BCM2E0D:*");
MODULE_ALIAS("acpi*:BCM2E0E:*");
MODULE_ALIAS("acpi*:BCM2E0F:*");
MODULE_ALIAS("acpi*:BCM2E10:*");
MODULE_ALIAS("acpi*:BCM2E11:*");
MODULE_ALIAS("acpi*:BCM2E12:*");
MODULE_ALIAS("acpi*:BCM2E13:*");
MODULE_ALIAS("acpi*:BCM2E14:*");
MODULE_ALIAS("acpi*:BCM2E15:*");
MODULE_ALIAS("acpi*:BCM2E16:*");
MODULE_ALIAS("acpi*:BCM2E17:*");
MODULE_ALIAS("acpi*:BCM2E18:*");
MODULE_ALIAS("acpi*:BCM2E19:*");
MODULE_ALIAS("acpi*:BCM2E1A:*");
MODULE_ALIAS("acpi*:BCM2E1B:*");
MODULE_ALIAS("acpi*:BCM2E1C:*");
MODULE_ALIAS("acpi*:BCM2E1D:*");
MODULE_ALIAS("acpi*:BCM2E1F:*");
MODULE_ALIAS("acpi*:BCM2E20:*");
MODULE_ALIAS("acpi*:BCM2E21:*");
MODULE_ALIAS("acpi*:BCM2E22:*");
MODULE_ALIAS("acpi*:BCM2E23:*");
MODULE_ALIAS("acpi*:BCM2E24:*");
MODULE_ALIAS("acpi*:BCM2E25:*");
MODULE_ALIAS("acpi*:BCM2E26:*");
MODULE_ALIAS("acpi*:BCM2E27:*");
MODULE_ALIAS("acpi*:BCM2E28:*");
MODULE_ALIAS("acpi*:BCM2E29:*");
MODULE_ALIAS("acpi*:BCM2E2A:*");
MODULE_ALIAS("acpi*:BCM2E2B:*");
MODULE_ALIAS("acpi*:BCM2E2C:*");
MODULE_ALIAS("acpi*:BCM2E2D:*");
MODULE_ALIAS("acpi*:BCM2E2E:*");
MODULE_ALIAS("acpi*:BCM2E2F:*");
MODULE_ALIAS("acpi*:BCM2E30:*");
MODULE_ALIAS("acpi*:BCM2E31:*");
MODULE_ALIAS("acpi*:BCM2E32:*");
MODULE_ALIAS("acpi*:BCM2E33:*");
MODULE_ALIAS("acpi*:BCM2E34:*");
MODULE_ALIAS("acpi*:BCM2E35:*");
MODULE_ALIAS("acpi*:BCM2E36:*");
MODULE_ALIAS("acpi*:BCM2E37:*");
MODULE_ALIAS("acpi*:BCM2E38:*");
MODULE_ALIAS("acpi*:BCM2E39:*");
MODULE_ALIAS("acpi*:BCM2E3A:*");
MODULE_ALIAS("acpi*:BCM2E3B:*");
MODULE_ALIAS("acpi*:BCM2E3C:*");
MODULE_ALIAS("acpi*:BCM2E3D:*");
MODULE_ALIAS("acpi*:BCM2E3E:*");
MODULE_ALIAS("acpi*:BCM2E3F:*");
MODULE_ALIAS("acpi*:BCM2E40:*");
MODULE_ALIAS("acpi*:BCM2E41:*");
MODULE_ALIAS("acpi*:BCM2E42:*");
MODULE_ALIAS("acpi*:BCM2E43:*");
MODULE_ALIAS("acpi*:BCM2E44:*");
MODULE_ALIAS("acpi*:BCM2E45:*");
MODULE_ALIAS("acpi*:BCM2E46:*");
MODULE_ALIAS("acpi*:BCM2E47:*");
MODULE_ALIAS("acpi*:BCM2E48:*");
MODULE_ALIAS("acpi*:BCM2E49:*");
MODULE_ALIAS("acpi*:BCM2E4A:*");
MODULE_ALIAS("acpi*:BCM2E4B:*");
MODULE_ALIAS("acpi*:BCM2E4C:*");
MODULE_ALIAS("acpi*:BCM2E4D:*");
MODULE_ALIAS("acpi*:BCM2E4E:*");
MODULE_ALIAS("acpi*:BCM2E4F:*");
MODULE_ALIAS("acpi*:BCM2E50:*");
MODULE_ALIAS("acpi*:BCM2E51:*");
MODULE_ALIAS("acpi*:BCM2E52:*");
MODULE_ALIAS("acpi*:BCM2E53:*");
MODULE_ALIAS("acpi*:BCM2E54:*");
MODULE_ALIAS("acpi*:BCM2E55:*");
MODULE_ALIAS("acpi*:BCM2E56:*");
MODULE_ALIAS("acpi*:BCM2E57:*");
MODULE_ALIAS("acpi*:BCM2E58:*");
MODULE_ALIAS("acpi*:BCM2E59:*");
MODULE_ALIAS("acpi*:BCM2E5A:*");
MODULE_ALIAS("acpi*:BCM2E5B:*");
MODULE_ALIAS("acpi*:BCM2E5C:*");
MODULE_ALIAS("acpi*:BCM2E5D:*");
MODULE_ALIAS("acpi*:BCM2E5E:*");
MODULE_ALIAS("acpi*:BCM2E5F:*");
MODULE_ALIAS("acpi*:BCM2E60:*");
MODULE_ALIAS("acpi*:BCM2E61:*");
MODULE_ALIAS("acpi*:BCM2E62:*");
MODULE_ALIAS("acpi*:BCM2E63:*");
MODULE_ALIAS("acpi*:BCM2E64:*");
MODULE_ALIAS("acpi*:BCM2E65:*");
MODULE_ALIAS("acpi*:BCM2E66:*");
MODULE_ALIAS("acpi*:BCM2E67:*");
MODULE_ALIAS("acpi*:BCM2E68:*");
MODULE_ALIAS("acpi*:BCM2E69:*");
MODULE_ALIAS("acpi*:BCM2E6B:*");
MODULE_ALIAS("acpi*:BCM2E6D:*");
MODULE_ALIAS("acpi*:BCM2E6E:*");
MODULE_ALIAS("acpi*:BCM2E6F:*");
MODULE_ALIAS("acpi*:BCM2E70:*");
MODULE_ALIAS("acpi*:BCM2E71:*");
MODULE_ALIAS("acpi*:BCM2E72:*");
MODULE_ALIAS("acpi*:BCM2E73:*");
MODULE_ALIAS("acpi*:BCM2E74:*");
MODULE_ALIAS("acpi*:BCM2E75:*");
MODULE_ALIAS("acpi*:BCM2E76:*");
MODULE_ALIAS("acpi*:BCM2E77:*");
MODULE_ALIAS("acpi*:BCM2E78:*");
MODULE_ALIAS("acpi*:BCM2E79:*");
MODULE_ALIAS("acpi*:BCM2E7A:*");
MODULE_ALIAS("acpi*:BCM2E7B:*");
MODULE_ALIAS("acpi*:BCM2E7C:*");
MODULE_ALIAS("acpi*:BCM2E7D:*");
MODULE_ALIAS("acpi*:BCM2E7E:*");
MODULE_ALIAS("acpi*:BCM2E7F:*");
MODULE_ALIAS("acpi*:BCM2E80:*");
MODULE_ALIAS("acpi*:BCM2E81:*");
MODULE_ALIAS("acpi*:BCM2E82:*");
MODULE_ALIAS("acpi*:BCM2E83:*");
MODULE_ALIAS("acpi*:BCM2E84:*");
MODULE_ALIAS("acpi*:BCM2E85:*");
MODULE_ALIAS("acpi*:BCM2E86:*");
MODULE_ALIAS("acpi*:BCM2E87:*");
MODULE_ALIAS("acpi*:BCM2E88:*");
MODULE_ALIAS("acpi*:BCM2E89:*");
MODULE_ALIAS("acpi*:BCM2E8A:*");
MODULE_ALIAS("acpi*:BCM2E8B:*");
MODULE_ALIAS("acpi*:BCM2E8C:*");
MODULE_ALIAS("acpi*:BCM2E8D:*");
MODULE_ALIAS("acpi*:BCM2E8E:*");
MODULE_ALIAS("acpi*:BCM2E90:*");
MODULE_ALIAS("acpi*:BCM2E92:*");
MODULE_ALIAS("acpi*:BCM2E93:*");
MODULE_ALIAS("acpi*:BCM2E94:*");
MODULE_ALIAS("acpi*:BCM2E95:*");
MODULE_ALIAS("acpi*:BCM2E96:*");
MODULE_ALIAS("acpi*:BCM2E97:*");
MODULE_ALIAS("acpi*:BCM2E98:*");
MODULE_ALIAS("acpi*:BCM2E99:*");
MODULE_ALIAS("acpi*:BCM2E9A:*");
MODULE_ALIAS("acpi*:BCM2E9B:*");
MODULE_ALIAS("acpi*:BCM2E9C:*");
MODULE_ALIAS("acpi*:BCM2E9D:*");
MODULE_ALIAS("acpi*:BCM2EA0:*");
MODULE_ALIAS("acpi*:BCM2EA1:*");
MODULE_ALIAS("acpi*:BCM2EA2:*");
MODULE_ALIAS("acpi*:BCM2EA3:*");
MODULE_ALIAS("acpi*:BCM2EA4:*");
MODULE_ALIAS("acpi*:BCM2EA5:*");
MODULE_ALIAS("acpi*:BCM2EA6:*");
MODULE_ALIAS("acpi*:BCM2EA7:*");
MODULE_ALIAS("acpi*:BCM2EA8:*");
MODULE_ALIAS("acpi*:BCM2EA9:*");
MODULE_ALIAS("acpi*:BCM2EAA:*");
MODULE_ALIAS("acpi*:BCM2EAB:*");
MODULE_ALIAS("acpi*:BCM2EAC:*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4334-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");

MODULE_INFO(srcversion, "DE6DE876C6761EB91B0985F");
